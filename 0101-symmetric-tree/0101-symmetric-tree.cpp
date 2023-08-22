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
    
    
    bool check(TreeNode* node1,TreeNode* node2){
        
        if((!node1 and node2)or(!node2 and node1)){
                    return  false;
                        
        }
        
        if(!node1 and !node2) return true;
        if(node1->val!=node2->val){
                return false;
        }
        
        if(!node1 and !node2) return true;
        
        return check(node1->left,node2->right)and check(node1->right,node2->left);
        
        
    }
    
    
    bool isSymmetric(TreeNode* root) {
        
          
        
            return check(root->left,root->right);
        
    }
};