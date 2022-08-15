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
    
    
    TreeNode* overlap(TreeNode* first,TreeNode* second){
        
                if(first==NULL){  
                        return second;
                }
        
                if(second==NULL){
                        return first;
                }
        
               
                first->val+=second->val;
                first->left= overlap(first->left,second->left);
                first->right=overlap(first->right,second->right);
                return first;
    }
    
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
                TreeNode* first=root1;
                TreeNode* second=root2;
        
                if(root1==NULL){
                        return second;
                }
                if(root2==NULL){
                        return first;
                }
                
                overlap(root1,root2);
                return first;
                
            
        
    }
};