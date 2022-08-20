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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
                int cnt=0;
                ListNode* temp=head;
                while(temp!=NULL){
                        temp=temp->next;
                        cnt+=1;
                }
                
                int idx=cnt-n;
                temp=head;
                while(idx>1){
                        temp=temp->next;
                        idx--;
                            
                }
        
                if(idx==0){
                    
                    head=head->next;
                    return head;                }
                
                if(temp->next!=NULL)
                    temp->next=temp->next->next;
                else{
                        return NULL;    
                }
                return head;
        
    }
};