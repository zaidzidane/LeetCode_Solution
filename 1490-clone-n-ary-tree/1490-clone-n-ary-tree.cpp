/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void dfs(Node* root,Node* ptr){
          
        //cout<<root->val<<endl;
         ptr->children.push_back(new Node(root->val));
        if(root->children.size()==0){
                
                return;
            
        }
        
        else{
                
            
            for(auto item: root->children){
                
                    
                    dfs(item,ptr->children.back());
                    
            }
    
        }
        
      
        
    }
    
    
    Node* cloneTree(Node* root) {
        
        if(root==NULL) return root;
        Node *ptr1=new Node();
        dfs(root,ptr1);
        
        return ptr1->children[0];
    }
};