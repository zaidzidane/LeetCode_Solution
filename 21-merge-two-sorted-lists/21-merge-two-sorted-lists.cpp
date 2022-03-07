class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        
        if(curr2==NULL){
                return l1;
        }
        if(curr1==NULL){
                return l2;
        }
        
        ListNode* head=new ListNode();
        ListNode* curr3=head;
        while(curr1 && curr2){
            if(curr1->val > curr2->val){
                        ListNode* new1=new ListNode(curr2->val);
                        curr3->next=new1;
                        curr2=curr2->next;
                }
            else{
                        ListNode* new1=new ListNode(curr1->val);
                        curr3->next=new1;
                        curr1=curr1->next;
            }
            
        curr3=curr3->next;
        }
        
        if(curr1){
            while(curr1){
                    ListNode* new1=new ListNode(curr1->val);
                    curr3->next=new1;
                    curr1=curr1->next;
                    curr3=curr3->next;
                    
            }
        }
        
        if(curr2){
            while(curr2){
                    ListNode* new1=new ListNode(curr2->val);
                    curr3->next=new1;
                    curr2=curr2->next;
                    curr3=curr3->next;
                    
            }
        }
        
      head=head->next;
      return head;  
        
    }
};