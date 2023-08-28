/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void dfs(TreeNode* root,TreeNode* parent,unordered_map<TreeNode*,TreeNode*>&gzip){
        
            if(root==NULL){
                return;
            }
            gzip[root]=parent;
            dfs(root->left,root,gzip);
            dfs(root->right,root,gzip);
    }
    
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
            unordered_map<TreeNode*,TreeNode*>gzip;
            unordered_set<TreeNode*>s;
            dfs(root,NULL,gzip);
            queue<pair<TreeNode*,int>>q;
            q.push({target,0});
            int cnt=0;
            vector<int>ans;
            s.insert(target);
            while(!q.empty()){
                    auto temp=q.front();
                    q.pop();
                    if(temp.second==k){
                            ans.push_back(temp.first->val);        
                    }
                    if(temp.first->left and s.find(temp.first->left)==s.end()){
                            q.push({temp.first->left,temp.second+1});
                             s.insert(temp.first->left);
                    }
                    if(temp.first->right and s.find(temp.first->right)==s.end()){
                            q.push({temp.first->right,temp.second+1});
                            s.insert(temp.first->right);
                    }
                    if(gzip.find(temp.first)!=gzip.end() and gzip[temp.first]!=NULL and s.find(gzip[temp.first])==s.end()){
                            q.push({gzip[temp.first],temp.second+1});
                            s.insert(gzip[temp.first]);
                    }
                       
            }
        
             return ans; 
    }   
};