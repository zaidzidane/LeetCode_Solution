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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
            int carry=0;
            ListNode* head=new ListNode();
            ListNode* curr=head;
            while(l1!=NULL and l2!=NULL){
                
                
                        int val=l1->val+l2->val+carry;
                        carry =val/10;
                        val=val%10;
                        curr->next=new ListNode(val);
                        l1=l1->next;
                        l2=l2->next;
                        curr=curr->next;
                        
            }
        
        
            if(l1!=NULL){
                    while(l1!=NULL){
                            int val=l1->val+carry;
                            carry=val/10;
                            val=val%10;
                            curr->next=new ListNode(val);
                            l1=l1->next;
                            curr=curr->next;
                    }
                
            }
        
        
            if(l2!=NULL){
                    
                    while(l2!=NULL){
                            
                            int val=l2->val+carry;
                            carry=val/10;
                            val=val%10;
                            curr->next=new ListNode(val);
                            l2=l2->next;
                            curr=curr->next;
                            
                    }
                
            }
        
            //cout<<carry<<endl;
            if(carry==1){
                    
                    curr->next=new ListNode(carry);    
                
            }
        
            return head->next;
        
    }
};