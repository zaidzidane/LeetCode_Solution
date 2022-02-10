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
    
    ListNode* top=NULL;
    void reverse(ListNode* first,ListNode* second)
    {
            
            if(second==NULL){
                        top=first;
                        return;
            }
            else{
                
                    reverse(second,second->next);
                    second->next=first;
                    //cout<<second->val<<"\t"<<first->val<<endl;
            }
        
        
    }    
    
    
    
    ListNode* reverseList(ListNode* head) {
            
            if(head==NULL){
                    return NULL;
            }
            reverse(head,head->next);
            head->next=NULL;
            return top;
    }
};