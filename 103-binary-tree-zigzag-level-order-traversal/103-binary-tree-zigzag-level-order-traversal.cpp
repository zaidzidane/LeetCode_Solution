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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     
        if(root==NULL){
                return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<vector<int>>ans;
        ans.push_back({root->val});
        vector<int>a;
        int flag=1;
        while(!q.empty()){
            TreeNode* temp=q.front();
            if(temp==NULL){
                    if(a.size()){
                        if(flag==0){
                            cout<<"yes";
                            ans.push_back(a);
                            flag=1;
                        }
                        else{
                            cout<<"yes";
                            reverse(a.begin(),a.end());
                            ans.push_back(a);
                            flag=0;
                        }
                    }
                    q.pop();
                    temp=q.front();
                    a.clear();
            }

            //cout<<temp->val<<endl;
            q.pop();
            if(!q.empty()){
                if(temp->left!=NULL){
                       q.push(temp->left); 
                        a.push_back(temp->left->val);
                }
                if(temp->right!=NULL){
                        q.push(temp->right);
                        a.push_back(temp->right->val);
                } 

                if(q.front()==NULL){
                        q.push(NULL);
                }
            }
        }
        
        return ans;
    }
};