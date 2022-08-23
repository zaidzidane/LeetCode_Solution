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
    
    
    void dfs(ListNode* head,string& val){
        
            if(head==NULL){
                    return;
            }
            
            else{
                
                    val+=to_string(head->val);
                    dfs(head->next,val);
                
            }
       
    } 
    
    
    bool isPalindrome(ListNode* head) {
        
            string val="";
            dfs(head,val);
            
            int i=0;
            int j=val.length()-1;
            while(i<j){
                
                    if(val[i]!=val[j])
                            return false;
                
                    i++;
                    j--;
                
            }
        
            return true;
        
    }
};