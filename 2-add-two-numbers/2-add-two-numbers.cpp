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
        
        
            ListNode* temp1=l1;
            ListNode* temp2=l2;
            ListNode* head=new ListNode();
            ListNode* temp=head;
            int carry=0;
            
        while(temp1!=NULL and temp2!=NULL){
                
                    
                    int value=temp1->val+temp2->val+carry;
                   
                    temp->next=new ListNode(value%10);
                    carry=(value)/10;
                    temp=temp->next;
                    temp1=temp1->next;
                    temp2=temp2->next;
            
            
        }
        
        if(temp1==NULL){
            
                while(temp2){
                    
                    temp->next=new ListNode((temp2->val+carry)%10);
                    carry=(temp2->val+carry)/10;
                    temp=temp->next;
                    temp2=temp2->next;
                    
                    
                }
            
        }
        
       if(temp2==NULL){
            
                while(temp1){
                    
                    temp->next=new ListNode((temp1->val+carry)%10);
                    carry=(temp1->val+carry)/10;
                    temp=temp->next;
                    temp1=temp1->next;
                    
                }
            
        }
        
        if(carry)
                temp->next=new ListNode(carry);
        
        
        return head->next;
        
    }
};