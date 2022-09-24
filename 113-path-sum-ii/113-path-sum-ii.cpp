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
    
    vector<vector<int>>ans;
    void dfs(TreeNode* root,int target,int sum,vector<int>v){
          
            if(root==NULL){
                    return;
            }
            sum+=root->val;
            v.push_back(root->val);
            if(target==sum and (!root->left) and (!root->right)){
                        
                        ans.push_back(v);
                        
            }
            dfs(root->left,target,sum,v); 
            dfs(root->right,target,sum,v);
            
        
        
    }
    
    
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
            int currentSum=0;
            vector<int>v;
            dfs(root,targetSum,currentSum,v);
            return ans;
    }
};