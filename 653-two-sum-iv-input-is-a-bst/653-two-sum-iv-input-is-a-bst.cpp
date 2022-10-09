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
    
    
    bool dfs(TreeNode* root,unordered_map<int,int>&gzip,int k){
        
        
            if(root==NULL){
                    return false;
            }
        
            if(gzip.find(k-root->val)!=gzip.end()){
                    return true;
            }
            
            
            gzip[root->val]=1;
            bool val1=false;
            bool val2=false;
            val1=dfs(root->left,gzip,k);
            val2=dfs(root->right,gzip,k);
            return val1|val2;
            
        
        
    }
    
    
    bool findTarget(TreeNode* root, int k) {
        
            unordered_map<int,int>gzip;
            return dfs(root,gzip,k);
        
        
    }
};