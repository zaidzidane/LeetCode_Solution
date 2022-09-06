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
    
    
    void dfs(TreeNode* root,TreeNode* parent,int flag){
        
        
           
            
        
            if(root->left)
            dfs(root->left,root,-1);
            if(root->right)
            dfs(root->right,root,1);
            
            if(root->left==NULL and root->right==NULL and root->val==0){
                
                        if(flag==-1)  parent->left=NULL;
                        if(flag==1)   parent->right=NULL;
                         return;
                 
            }
        
        
    }
    
    
    
    
    TreeNode* pruneTree(TreeNode* root) {
        
        
     
        
        dfs(root,NULL,0);
           if(root->left==NULL and root->right==NULL and root->val==0){
                
                       
                        return NULL;
                 
            }
        
        return root;
        
    }
};