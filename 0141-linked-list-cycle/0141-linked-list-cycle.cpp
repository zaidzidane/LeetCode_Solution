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
    
    bool hasCycle(ListNode *head) {
    
            if(!head or !head->next or !head->next->next) return false;
            
            ListNode* temp1=head;
            ListNode* temp2=head->next->next;
        
            while( temp2!=NULL and temp2->next!=NULL ){
                
                    if(temp1==temp2){
                        
                            return true;
                    }
                    
                    temp1=temp1->next;
                    temp2=temp2->next->next;
                
            }
                
            return false;
        
    }
};