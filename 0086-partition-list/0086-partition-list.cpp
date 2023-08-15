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
    ListNode* partition(ListNode* head, int x) {
                
            ListNode* temp=head;
            ListNode* previous=NULL;
            while(temp){
                    if(temp->val>=x){
                            break;
                    }
                    
                    previous=temp;
                    temp=temp->next;    
            }
            
        ListNode* previous2=NULL;
        ListNode* temp2=temp;
        
        
            while(temp2){
                
                    if(temp2->val < x){
                            if(previous!=NULL){
                                
                                    previous->next = temp2;
                                    previous2->next=temp2->next;
                                    temp2->next=temp;
                                    previous=previous->next;
                                    
                            }
                            else{
                                    if(previous2!=NULL){
                                        previous2->next=temp2->next;
                                        temp2->next=temp;
                                        previous=  temp2;
                                        head=temp2;
                                    }
                                    
                                
                            }
                    }
                
                    previous2=temp2;
                    temp2=temp2->next;
                
            }
            
            return head;
            
    }
};