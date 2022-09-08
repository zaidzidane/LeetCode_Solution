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
    
    
    bool dfs(TreeNode* p,TreeNode*q){
        
            
            if(p==NULL and q==NULL){
                    
                        return true;
            }
        
            if((p==NULL and q!=NULL)or(q==NULL and p!=NULL)) return false;
        
            bool val1;
            bool val2;
        
            if(p->val!=q->val) return false;
        
            val1=dfs(p->left,q->left);
            
            val2=dfs(p->right,q->right);
            
           
            return val1&val2;
    }
    
    
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
              return dfs(p,q);
        
        
    }
};