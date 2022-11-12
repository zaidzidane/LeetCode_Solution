/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
  
 
 
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
    
                ListNode* temp1=headA;
                ListNode* temp2=headB;
        
                    
                int cnt=0;
                while(temp1){
                    temp1=temp1->next;
                    cnt++;
                }
                
                int cnt1=0;
                while(temp2){
                    
                    temp2=temp2->next;
                    cnt1++;
                    
                }
                
        
               
                temp1=headA;
                while(cnt>cnt1){
                    
                    
                    temp1=temp1->next;
                    cnt--;
                        
                    
                }
        
                 temp2=headB;
                 while(cnt<cnt1){
                    
                   
                    temp2=temp2->next;
                     cnt1--;   
                    
                }
        
                cout<<temp1->val<<temp2->val<<endl;
                while(temp1!=temp2){
                    
                        temp1=temp1->next;
                        temp2=temp2->next;
                    
                    
                }
        
            
        
                return  temp1;
        
        
        
    }
};