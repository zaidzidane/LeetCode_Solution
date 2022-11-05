/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
            
            vector<int>ans;
            
            for(int i=0;i<lists.size();i++){
                    
                
                        while(lists[i]!=NULL){
                                
                                ans.push_back(lists[i]->val);
                                lists[i]=lists[i]->next;
                        }
                        
                
            }
           
            sort(ans.begin(),ans.end());
        
            ListNode* temp=new ListNode();
            ListNode* a=temp;
            for(int i=0;i<ans.size();i++){
                    temp->next=new ListNode(ans[i]);
                    temp=temp->next;
                
            }
        
        
            return a->next;
    }
};