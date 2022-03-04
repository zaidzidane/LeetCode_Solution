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
    ListNode* removeZeroSumSublists(ListNode* head) {
        
        unordered_map<int,ListNode*>gzip;
        ListNode* dummy = new ListNode(0), *curr = dummy;
        dummy->next = head;
        int sum=0;
     
        while(curr!=NULL){
                sum+=curr->val;
                if(gzip.count(sum)!=0){
                        curr= gzip[sum]->next;
                        int p=sum+curr->val;
                        while(p!=sum){
                                gzip.erase(p);
                                curr=curr->next;
                                p+=curr->val;
                        }
                        
                            gzip[sum]->next=curr->next;
                       
                }
                
                else{
                gzip[sum]=curr;
                    
                }
                curr=curr->next;
                    
        }
        
        return dummy->next;
        
    }
};