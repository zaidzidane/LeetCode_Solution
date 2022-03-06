/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        
        
        if(head==NULL){
                
                Node* tmp=new Node(insertVal);
                tmp->next=tmp;
                return tmp;
        }
        
        
        if(head->next==head){
                
                
                Node* tmp=new Node(insertVal); 
                head->next=tmp;
                tmp->next=head;
                return head;
        }
        
        Node* curr=head;
        Node* min_=new Node(INT_MAX);
        int flag=0;
        while(curr!=head or flag==0 ){
            
                    flag=1;
                    if(curr->val<min_->val){
                            
                        min_=curr;
                      
                    }
                    curr=curr->next;
            
        }
        
       // cout<<min_->val;
        Node* insert=min_;
        flag=0;
        while(insert!=min_->next){
                
                    if(min_->val <=insertVal and min_->next->val>insertVal)
                    {
                                flag=1;
                                Node* tmp=new Node(insertVal);
                                tmp->next=min_->next;
                                min_->next=tmp;
                                break;
                            
                    }
                    min_=min_->next;
        }
        
        if(flag==0){
                
                                 Node* tmp=new Node(insertVal);
                                tmp->next=min_->next;
                                min_->next=tmp;
            
        }
        
       
        return head;
        
    }
};