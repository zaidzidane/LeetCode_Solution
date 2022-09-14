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
    
    int cnt=0;
    void dfs(TreeNode* root,vector<int>ans){
        
        
            if(!root->left and !root->right){
                   ans[root->val]+=1;
                    int flag=0;
                    for(int i=0;i<ans.size();i++){
                            if((ans[i]%2!=0 and flag==0) or (ans[i]%2==0)){
                                        if(ans[i]%2!=0){
                                                flag=1;
                                        }
                                        
                            }
                            else{
                                    
                                        return;
                                
                            }
                        
                    }
                    cnt+=1;
            }
        
            ans[root->val]+=1;
            if(root->left) dfs(root->left,ans);
            if(root->right) dfs(root->right,ans);
            
            
        
    }
    
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
            vector<int>ans(10,0);
            dfs(root,ans);
            return cnt;
        
        
    }
};