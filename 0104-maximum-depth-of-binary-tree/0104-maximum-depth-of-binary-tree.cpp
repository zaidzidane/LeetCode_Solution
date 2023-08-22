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

// class TreeNode{
    
//         int val;
//         TreeNode* left;
//         TreeNode* right;
//         TreeNode():val(0),left(nullptr),right(nullptr){}
//         TreeNode(int x):val(x),left(nullptr),right(nullptr){}
//         TreeNode(int x,TreeNode* left,TreeNode* right):val(x),left(nullptr),right(nullptr){}
    
// };


class Solution {
public:
    
    int maxDep=0;
    void depth(TreeNode* root,int d){
            if(root==NULL){
                    maxDep=max(maxDep,d);
                    return;
            }
            depth(root->left,d+1);
            depth(root->right,d+1);
    }

    
    int maxDepth(TreeNode* root) {
        
           depth(root,0); 
           return maxDep;
        
    }
};