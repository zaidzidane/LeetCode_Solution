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
    
    vector<TreeNode*>ans;
    void dfs(TreeNode* root,unordered_map<int,int>gzip,TreeNode* parent,int dir)
    {
            if(root==NULL){
                    return;
            }
            if(gzip[root->val]){
                    if(parent!=NULL){
                        if(dir==-1){
                                parent->left=NULL;
                        }
                        else{
                                parent->right=NULL;
                        }
                    }
                    if(root->left){
                            
                            dfs(root->left,gzip,NULL,-1);
                    }
                    if(root->right){
                            
                            dfs(root->right,gzip,NULL,1);
                    }
            }
            else{
                if(parent==NULL){
                        ans.push_back(root);
                }
                dfs(root->left,gzip,root,-1);
                dfs(root->right,gzip,root,1);
            }   
    }
    
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete)
    {
            unordered_map<int,int>gzip;
            for(auto item:to_delete){
                    gzip[item]=1;
            }
        
            TreeNode* parent;
            int dir=0;
            dfs(root,gzip,parent,dir);
            return ans;
        
    }
};