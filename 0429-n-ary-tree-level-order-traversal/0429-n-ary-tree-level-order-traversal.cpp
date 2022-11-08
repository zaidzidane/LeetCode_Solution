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
    vector<vector<int>> levelOrder(Node* root) {
        
      vector<vector<int>>ans;
        
      if(!root){
            return {};
      }
    
     queue<Node*>q;
     q.push(root);
     q.push(NULL);
     vector<int>path;
        
        
     while(!q.empty()){
         
            Node* temp=q.front();
            q.pop();
           
           if(temp==NULL){
               
                    ans.push_back(path);
                    path.clear();
                    if(q.empty())
                            break;
                    else{
                            q.push(NULL);
                    }
                    
           }
            else{
                path.push_back(temp->val);
                for(auto item:temp->children){
                        
                        q.push(item);                


                }
               
            }
         
     }
        
    return ans;
        
    }
};