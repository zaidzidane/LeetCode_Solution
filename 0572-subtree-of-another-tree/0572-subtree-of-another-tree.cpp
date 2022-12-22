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
    
    bool check(TreeNode* root,TreeNode* subRoot){
        
            if(root==NULL and subRoot==NULL){
                    return true;
            }
        
            if(root!=NULL and subRoot==NULL){
                    return false;
            }
        
            if(root==NULL and subRoot!=NULL){
                    return false;
            }
        
            if(root->val!=subRoot->val){
                    return false;
            }
       
            return check(root->left,subRoot->left) and check(root->right,subRoot->right);
                  
        
    }
    
    
    bool dfs(TreeNode* root,TreeNode* subRoot){
        
        if(root==NULL){
                return false;
        }
        
        if(root->val==subRoot->val and check(root,subRoot)){   
                return true;
        }
        
        return dfs(root->left,subRoot) or dfs(root->right,subRoot);
           
        
    }
    
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        return dfs(root,subRoot);
        
    }
};