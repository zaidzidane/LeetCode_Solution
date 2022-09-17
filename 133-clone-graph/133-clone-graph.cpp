/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/


unordered_map<Node*,Node*>gzip;
Node* dfs(Node* items){
            
        vector<Node*>neighbour;
        Node* root=new Node(items->val);
        gzip[items]=root;
        for(auto item: items->neighbors){
            
                    if(gzip.find(item)!=gzip.end()){
                        
                            neighbour.push_back(gzip[item]);
                        
                    }
                    else{
                        
                             neighbour.push_back(dfs(item));
                    }
                   
                    
        }
        root->neighbors=neighbour;
    
        return root;  
}



class Solution {
public:
    Node* cloneGraph(Node* node) {
            
            if(node==NULL){
                    return NULL;
            }
        
            return dfs(node);
        
          
        
        
    }
};