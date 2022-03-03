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
    void flatten(TreeNode* root) {
        
        if(root==NULL){
                return;
        }
        
        stack<TreeNode*>s1;
        queue<TreeNode*>ans;
        TreeNode* curr=root;
        while(!s1.empty() or curr!=NULL){
            
                        while(curr!=NULL){
                                //cout<<curr->val<<endl;
                                s1.push(curr);
                                ans.push(curr);
                                curr=curr->left;
                        }
            
            
                        
                        curr=s1.top();
                        s1.pop();
                        curr=curr->right;

        }
        
        
       TreeNode* temp; 
        while(!ans.empty()){
                
                temp=ans.front();
                //cout<<temp->val<<endl;
                ans.pop();
                temp->right=ans.front();
                temp->left=NULL;
                
            
        }
        
        temp->right=NULL;

    }
};