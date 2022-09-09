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
    vector<int> rightSideView(TreeNode* root) {
        
            if(root==NULL) return {};
            queue<TreeNode*>q;
            q.push(root);
            q.push(NULL);
            vector<int>ans;
            ans.push_back(root->val);
            int value;
            while(!q.empty()){
                    
                    TreeNode* temp=q.front();
                    q.pop();
                
                    if(temp==NULL){
                        
                           
                             if(q.size()>0){
                                q.push(NULL);
                                ans.push_back(value);
                             }
                        
                    }
                    else{             
                  
                    
                            if(temp->left){

                                    q.push(temp->left);
                                    value=temp->left->val;

                            }

                            if(temp->right){

                                    q.push(temp->right);
                                    value=temp->right->val;

                            }
                    }
                
            }
        
            return ans;
        
    }
};