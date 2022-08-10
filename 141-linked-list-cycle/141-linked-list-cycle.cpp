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
        
        
                if(head==NULL or head->next==NULL){
                        return false;
                }
                ListNode* first=head;
                ListNode* second=head->next->next;
        
                while(second!=NULL  and second->next!=NULL){
                        
                        if(first==second){
                                return true;
                        }
                        else{
                                    
                                first=first->next;
                                second=second->next->next;
                                
                        }
                    
                }
        
                return false;
    }
};