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
    
    ListNode* reverse(ListNode* child,ListNode* parent){
        
    
            if(child==NULL){
                    
                        return parent;
            }
        
            
            ListNode* temp =child->next;
            child->next=parent;
            return(reverse(temp,child));        
        
        
    }
    
    
    
    ListNode* reverseList(ListNode* head) {
    
               return reverse(head,NULL);
        
        
    }
};