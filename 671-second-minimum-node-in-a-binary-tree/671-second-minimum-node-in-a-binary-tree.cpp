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
    
    int findSecondMinimumValue(TreeNode* root) {
        
        TreeNode* curr=root;
        set<int>v;
        stack<TreeNode*>s;
        while(!s.empty() or curr!=NULL){
                while(curr!=NULL){
                        s.push(curr);
                        curr=curr->left;
                }
                curr=s.top();
                //cout<<curr->val<<endl;
                v.insert(curr->val);
                s.pop();  
                curr=curr->right;
                     
        }
        
        if(v.size()<2)
                return -1;
        
        
    int k=0;
    for(auto itr:v){
            k++;
            if(k==2){
                return itr;
            }
    }
        
        return -1;
    }
};