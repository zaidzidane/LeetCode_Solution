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
    ListNode* rotateRight(ListNode* head, int k) {
        
        
            
            if(head==NULL or k==0){
                    return head;
            }
            int cnt=0;
            ListNode* curr=head;
            
            while(curr!=NULL){
                    
                    curr=curr->next;
                    cnt++;
                
            }
        
            curr=head;
            k%=cnt;
            int val=cnt-k;
            if(val<=0 or k==0){
                    return head;
            }
        
            
            while(val>1){
                    cout<<curr->val<<endl;
                    curr=curr->next;
                    val-=1;
            }
        
        
            ListNode* first=curr->next;
            //cout<<first->val<<endl;
            curr->next=NULL;
                
            ListNode* q=first;
            while(q->next!=NULL){
                    q=q->next;        
            }
        
            q->next=head;
                
            return first;
    }
};