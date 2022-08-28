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
    
    map<int,vector<int>>gzip;
    
    
    int dfs(TreeNode* root){
        
            if(!root) return -1;
            
            int leftheight=dfs(root->left);
            int rightheight=dfs(root->right);
        
            int currentheight=max(leftheight,rightheight)+1;
        
            gzip[currentheight].push_back(root->val);
        
            return currentheight+1;
        
    }
    
    
    
    
    vector<vector<int>> findLeaves(TreeNode* root) {
        
        
            dfs(root);
        
            vector<vector<int>>ans;
            for(auto item:gzip){
                    
                    ans.push_back(item.second);
            }     
            return ans;
        
    }
};