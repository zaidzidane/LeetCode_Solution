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
    
    int total=0;
    void totalBinary(TreeNode* node,int val){
        
            if(!node) return;
        
            if(node->left==NULL and node->right==NULL){
                    total+=(val*10+node->val);
                    return;            
            }
            
            val*=10;
            totalBinary(node->left,val+node->val);
            totalBinary(node->right,val+node->val);   
    }
    
    
    int sumNumbers(TreeNode* root) {
        
            if(root==NULL){
                    return 0;
            }

        
            totalBinary(root,0); 
            return total;
        
    }
};