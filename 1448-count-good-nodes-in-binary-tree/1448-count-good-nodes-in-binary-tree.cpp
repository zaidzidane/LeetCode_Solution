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
    int sum=0;
    void dfs(TreeNode* root,int max){
            
                if(root==NULL)
                        return;
        
                if(root->val>=max){                
                            sum+=1;
                            max=root->val;
                }
        
        
                dfs(root->left,max);
                dfs(root->right,max);
        
        
        
        
    }
    
    
    int goodNodes(TreeNode* root) {
        
        
        dfs(root,root->val);
        return sum;
        
        
    }
};