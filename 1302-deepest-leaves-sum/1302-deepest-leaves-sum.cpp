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
    int deepestLeavesSum(TreeNode* root) {
        
        if(root==NULL){
                return -1;
        }
        
        TreeNode* curr=root;
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        while(!q.empty())
        {   sum=0;
            int nodecount=q.size();
                while(nodecount>0){
                    TreeNode* node=q.front();
                    sum+=node->val;
                
                    q.pop();    
                    if(node->left!=NULL){
                            q.push(node->left);
                    }
                    if(node->right!=NULL){
                            q.push(node->right);

                }
                nodecount--;
               
                
            } 
            
                
                
        }
        
        
         
        
        return sum;
        
        
        
        
    }
};