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
    ListNode *detectCycle(ListNode *head) {
            
        
                if(head==NULL or head->next==NULL){
                            return NULL;
                }
                
                
                ListNode* first=head;
                ListNode* second =head;

                while(second!=NULL and second->next!=NULL){
                            first=first->next;
                            second=second->next->next;
                    
                            if(first==second){
                                  
                                    first=head;
                                    while(first!=second){
                                           
                                                    
                                                        first=first->next;
                                                        second=second->next;
                                            
                                        
                                        
                                    }
                                    return first;
                                
                                
                                
                            }
                            
                                    
                                        
                                
                            
                                
                }
                
                return NULL;           
                
                    
    }   
};