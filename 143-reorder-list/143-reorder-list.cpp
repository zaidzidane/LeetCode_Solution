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
    void reorderList(ListNode* head) {
        
            ListNode* curr=head;
            unordered_map<ListNode*,ListNode*>gzip;
            int cnt=0;
            while(curr->next!=NULL){
                    cnt+=1;
                    gzip[curr->next]=curr;
                    curr=curr->next;
            }    
        
        
            ListNode* end=curr;
            curr=head;   
            cnt/=2;
            //cout<<cnt<<endl;
            while(cnt--)
            {       //cout<<end->val<<"\t"<<curr->val<<endl;
                    end->next=curr->next;
                    curr->next=end;                
                    
                      curr=end->next;
                      end=gzip[end];
                
            }
            end->next=NULL;
            
            curr=head;
            while(curr!=NULL){
                    //cout<<curr->val<<endl;
                    curr=curr->next;
                    
            }
            
            
    }
};