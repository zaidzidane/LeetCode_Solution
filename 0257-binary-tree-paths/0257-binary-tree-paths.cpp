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
    
    vector<string>ans;
    
    void dfs(TreeNode* root,string s){
        
           if(root==NULL) return;
        
            if(root->left==NULL and root->right==NULL){            
                    s+=to_string(root->val);
                    ans.push_back(s);
                    return;       
            }
        
        
            s+=to_string(root->val)+"->";
            dfs(root->left,s);
            dfs(root->right,s);
            return;
        
        
        
    }
    
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
                dfs(root,"");
                return ans;
    }
};