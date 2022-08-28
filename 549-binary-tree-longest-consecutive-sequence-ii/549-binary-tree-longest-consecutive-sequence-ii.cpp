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
    
    int max_val=0;
    
    pair<int,int>longest_path(TreeNode* root){
        
            if(root==NULL)
                    return make_pair(0,0);
        
            int inr=1;
            int dec=1;
        
            if(root->left){
                
                    auto left=longest_path(root->left);
                    if(root->val==root->left->val+1){   
                                dec=left.second+1;
                    }
                    if(root->val==root->left->val-1){
                                inr=left.first+1;
                        
                    }
                    
                
            }
        
        
            if(root->right){
                
                    auto right=longest_path(root->right);
                    if(root->val==root->right->val+1){
                        
                                dec=max(dec,right.second+1);
                        
                    }
                
                    if(root->val==root->right->val-1){
                        
                                inr=max(inr,right.first+1);
                        
                    }
                    
                
            }
        
            max_val=max(max_val,inr+dec-1);
            return make_pair(inr,dec);
    }
    
    
    
    
    int longestConsecutive(TreeNode* root) {
        
       longest_path(root);
        return max_val;
        
    }
};