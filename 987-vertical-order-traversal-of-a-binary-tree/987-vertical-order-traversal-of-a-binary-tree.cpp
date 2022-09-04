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
    
    map<int,vector<pair<int,int>>>gzip;
    
    
    void dfs(TreeNode* root,int val1,int val2){
        
            
                if(root==NULL) return;
        
                if(root->left){
                    
                    
                        gzip[val2-1].push_back(make_pair(val1+1,root->left->val));
                        dfs(root->left,val1+1,val2-1);
                    
                }
        
                if(root->right){
                    
                        gzip[val2+1].push_back(make_pair(val1+1,root->right->val));
                        dfs(root->right,val1+1,val2+1);
                    
                }
      
        
    }
    
    
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
                
                int val1=0;
                int val2=0;
                if(root==NULL) return {};
            
                gzip[0].push_back(make_pair(0,root->val));
                dfs(root,val1,val2);
                
                vector<vector<int>>ans;
                for(auto item:gzip){
                        vector<int>row;
                        
                       
                        sort(item.second.begin(),item.second.end());
                        for(int i=0;i<item.second.size();i++){
                             
                                row.push_back(item.second[i].second);
                            
                        }
                    
                        ans.push_back(row);
                    
                    
                }
        
            
                return ans;
        
    }
};