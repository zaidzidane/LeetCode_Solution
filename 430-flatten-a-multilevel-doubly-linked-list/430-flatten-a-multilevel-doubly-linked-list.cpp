/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

Node* last(Node* last){
    
        while(last->next!=NULL){
                    
                last=last->next;
        }    
    
        return last;
    
}

class Solution {
public:
    Node* flatten(Node* head) {
        
            if(head==NULL) return head;
            Node* curr=head;
            while(curr){
                   
                    if(curr->child!=NULL and curr->next!=NULL){
        
                            Node* tmp=curr->next;
                            curr->next=curr->child;
                           
                            curr->child->prev=curr;
                            Node* l=last(curr->child);
                            l->next=tmp;
                            tmp->prev=l;
                    
                    }   
                
                    if(curr->child!=NULL and curr->next ==NULL){
        
                            Node* tmp=curr->child;
                            curr->child=NULL;
                            curr->next=tmp;
                            tmp->prev=curr;
                    }  
                
                
                    curr=curr->next; 
            }
        
            Node* q=head;
            while(q->next!=NULL){
                    //cout<<q->val;
                    q->child=NULL;
                    q=q->next;
            }

            
        
            return head;
            
        
    }
};