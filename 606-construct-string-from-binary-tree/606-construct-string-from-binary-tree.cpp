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
    
    
    
    string dfs(TreeNode* root){
            cout<<root->val<<endl;
            if(root->left==NULL and root->right==NULL){
                
                    return to_string(root->val);
                
            }
            string ans="";
            if(root->left)
                     ans+=to_string(root->val) +"("+dfs(root->left)+")";
            if(root->left==NULL)
                    ans+=to_string(root->val)+"()";
            
            if(root->right){
                      
                     ans+="("+dfs(root->right)+")";
            }  
            
            
        
            return ans;
            
    }
    
    
    string tree2str(TreeNode* root) {
        
        
           return dfs(root);
          
    }
};