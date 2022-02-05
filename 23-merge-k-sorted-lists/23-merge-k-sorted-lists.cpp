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

class compare{
  public:
        bool operator()(ListNode* a,ListNode* b){
            return a->val>b->val;
        }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<ListNode*,vector<ListNode*>,compare>pq;
        for(int i=0;i<lists.size();i++){
                ListNode* l=lists[i];
                while(l!=NULL){
                        pq.push(l);
                        l=l->next;
                }
        }
        
        
        ListNode* head=new ListNode();
        ListNode* curr=head;
        while(!pq.empty()){
                ListNode* temp=pq.top();
                cout<<temp->val<<endl;
                curr->next=temp;
                curr=curr->next;
                pq.pop();
        } 
        
       curr->next=NULL;
        return head->next; 
    }
    
};