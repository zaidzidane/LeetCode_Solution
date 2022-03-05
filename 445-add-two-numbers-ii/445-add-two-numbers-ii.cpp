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
    
    ListNode* reverse(ListNode* l){
        
        if(l->next==NULL){
                return l;
        }
        
        ListNode* prev=l;
        ListNode* forw=l->next;
        prev->next=NULL;
        while(forw){
                
                    ListNode* temp=forw->next;
                    forw->next=l;
                    l=forw;
                    forw=temp;
        }  
        
        return l;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
            l1=reverse(l1);
            l2=reverse(l2);
            ListNode* ans=new ListNode(0);
            ListNode* f=ans;
            int carry=0;
            
            while(l1!=NULL and l2!=NULL){
                    int val=l1->val+l2->val+carry;
                    ans->next=new ListNode((val)%10);
                    carry=val/10;
                    ans=ans->next;
                    l1=l1->next;
                    l2=l2->next;
                    
            }
        
         
        
            if(l1==NULL){
                    while(l2!=NULL){
                            int val=l2->val+carry;
                            ans->next=new ListNode((val)%10);
                            carry=val/10;
                            ans=ans->next;
                            l2=l2->next;
                    }
            }
        
            if(l2==NULL){
                    while(l1!=NULL){
                            
                            int val=l1->val+carry;
                            ans->next=new ListNode((val)%10);
                            carry=val/10;
                            ans=ans->next;
                            l1=l1->next;
                    }
            }
        
            if(carry==1){

                    ans->next=new ListNode(1);
                    
            }
            ans=NULL;
        
            f=reverse(f->next);
            
           
            return f;
        
    }
};