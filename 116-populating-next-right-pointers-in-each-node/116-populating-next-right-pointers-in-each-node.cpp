/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(root==NULL)
            return NULL;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            
                    Node* temp=q.front();
                    q.pop();
            
                    if(temp==NULL and q.size()>=1){
                            cout<<"here";
                            q.push(NULL);
                            temp=q.front();
                            q.pop();
                            
                    }
                
                    else if(temp==NULL and q.size()==0){
                        
                            break;
                    }
                        
                            
                    
                     cout<<temp->val;
                    temp->next=q.front();
                    
                    if(temp->left!=NULL){
                        
                                q.push(temp->left);
                        
                    }
                    if(temp->right!=NULL){
                        
                                q.push(temp->right);
                    }
            
                    
        }
        
        return root;
    }
};