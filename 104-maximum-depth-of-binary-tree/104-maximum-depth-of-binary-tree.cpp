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
    int max_=1;
    
    void dfs(TreeNode* root,int depth){
        
            cout<<root->val<<endl;
        
            if(root==NULL){
                    return;
            }
            else{
                
                    if(root->left){
                            
                                max_=max(max_,depth+1);
                                dfs(root->left,depth+1);
                            
                    }
                
                    if(root->right){
                            
                               
                                max_=max(max_,depth+1);
                                dfs(root->right,depth+1);
                                
                    }
                        
                
            }
        
        
    }
    
    int maxDepth(TreeNode* root) {
        
        if(root==NULL){
                return 0;
        }
        int depth=1;
        dfs(root,depth);
        return max_;
    }
};