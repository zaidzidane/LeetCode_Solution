/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalOrder(TreeNode* root) {
        
        if(root==NULL) return {};
            
       unordered_map<TreeNode*,int>gzip;
        gzip[root]=0;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            
                TreeNode* temp=q.front();
                q.pop();
            
                if(temp->left!=NULL){
                    
                        gzip[temp->left]=gzip[temp]-1;
                        q.push(temp->left);
                    
                }
                if(temp->right!=NULL){
                    
                         gzip[temp->right]=gzip[temp]+1;
                        q.push(temp->right);
                    
                }
            
        }
        
        map<int,vector<int>>m;
        m[0].push_back(root->val);
        q.push(root);
        
        while(!q.empty()){
            
                TreeNode* temp=q.front();
                q.pop();
                
                if(temp->left!=NULL){
                    
                        m[gzip[temp->left]].push_back(temp->left->val);
                        q.push(temp->left);
                    
                }
                if(temp->right!=NULL){
                    
                        m[gzip[temp->right]].push_back(temp->right->val);
                        q.push(temp->right);
                    
                }
            
        }
        
        
        vector<vector<int>>ans;
        for(auto item:m){
            
                ans.push_back(item.second);
        }
        
        
        return ans;
        
        
        
        
        
    }
};