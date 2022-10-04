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
    
    bool dfs(TreeNode* root,int sum,int targetSum){
        
             sum+=root->val;
            if(root->left==NULL and root->right==NULL and sum==targetSum){
                    cout<<sum;
                    return true;
            }
        
            if(root->left==NULL and root->right==NULL  and sum!=targetSum){
                    return false;
            }
        
          
            bool val1=false,val2=false;
            if(root->left)
                        val1=dfs(root->left,sum,targetSum);
            if(root->right)
                        val2=dfs(root->right,sum,targetSum);
        
            return  val1 or val2;
            
        
        
    }
    
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
                int sum=0;
                if(root==NULL) return false;
        
            
        
                return dfs(root,sum,targetSum);
        
    }
};