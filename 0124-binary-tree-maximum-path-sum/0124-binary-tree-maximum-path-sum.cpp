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
    
    int dfs(TreeNode* root,int& max_sum){
        
            if(root==NULL){
                    return 0;         
            }
            
            
            int max_left=dfs(root->left,max_sum);
            int max_right=dfs(root->right,max_sum);
        
         
            max_left=max_left>0?max_left:0;
            max_right=max_right>0?max_right:0;
            
            int val=max(max_left,max_right)+root->val;
            
            max_sum=max(max_sum,max_left+max_right+root->val);
                
            return val;
    }
    
    
    
    int maxPathSum(TreeNode* root) {
        
            int max_sum=INT_MIN;
            dfs(root,max_sum);
            return max_sum;
           
        
    }
};