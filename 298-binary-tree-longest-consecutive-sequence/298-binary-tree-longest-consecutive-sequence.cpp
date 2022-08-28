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

    int dfs(TreeNode* root,TreeNode* parent,int length){
        
          
            if(root==NULL)
                    return 0;
        
            length=(parent!=NULL and parent->val==root->val-1)?length+1:1;
        
            int max_depth=max(length,(max(dfs(root->left,root,length),dfs(root->right,root,length))));
            
        
            return max_depth;
                
    }
    
    
    int longestConsecutive(TreeNode* root) {
        
           return dfs(root,NULL,0);
        
    }
};