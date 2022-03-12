/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    
    unordered_map<Node*,int>first;    
    Node* copyRandomList(Node* head) {
        
            if(head==NULL){
                    return NULL;
            }
            
            Node *curr=head; 
            int i=1;
            first[head]=0;
            while(curr){
                    first[curr->next]=i;
                    curr=curr->next;
                    i+=1;                        
            }
            
            Node *head1=new Node(-1);
            curr=head;
            Node* curr1=head1;
            unordered_map<int,Node*>second;    
            i=0;
            while(curr){
                   Node* temp=new Node(curr->val);
                    curr1->next=temp;
                    curr1=curr1->next;
                    second[i]=curr1;
                    i+=1;
                    curr=curr->next;
            }
        
        
            Node* temp1=head1;
            while(temp1){
                
                cout<<temp1->val<<'\t';
                temp1=temp1->next;
                
            }
        
        
        
            
            curr=head;
            head1=head1->next;
            curr1=head1;
            while(curr){
                    curr1->random=second[first[curr->random]];
                    curr1=curr1->next;
                    curr=curr->next;
                
            }
            
       
        return head1;
    }
};