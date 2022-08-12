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
        
        
            int lenA=0;
            int lenB=0;
            
            ListNode* tempA=headA;
            ListNode* tempB=headB;
            while(tempA!=NULL){
                               
                                tempA=tempA->next;
                                lenA+=1;
                        
            }    
            
            while(tempB!=NULL){
                        
                                tempB=tempB->next;
                                lenB+=1;
                        
            
            }
            if(lenA>lenB){
                
                        while(lenA>lenB){
                                headA=headA->next;
                                lenA--;
                                
                        }
                    
            }
        
            if(lenB>lenA){
                
                        while(lenA<lenB){
                                headB=headB->next;
                                lenB--;
                            
                        }
                
            }
        
            while(lenB!=0){
                
                
                    if(headA==headB){
                                return headA;
                            
                    }
                    headA=headA->next;
                    headB=headB->next;
                    lenB--;
            }
        
            return NULL;
        
    }
};