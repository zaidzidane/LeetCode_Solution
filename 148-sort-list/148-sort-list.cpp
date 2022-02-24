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

struct compare{
    
        bool operator()(ListNode* a,ListNode* b){
            
                return (a->val>b->val);
        }  
    
};



class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
        priority_queue<ListNode*,vector<ListNode*>,compare>pq;
        ListNode* curr=head;
        while(curr!=NULL){
                pq.push(curr);
                curr=curr->next; 
        }
        ListNode* ans=new ListNode();
        ListNode* top=ans;
        while(!pq.empty()){            
                ans->next=pq.top();
                pq.pop();
                ans=ans->next;
                //cout<<ans->val<<endl;
        }
        ans->next=NULL;
        return top->next;
    }
};