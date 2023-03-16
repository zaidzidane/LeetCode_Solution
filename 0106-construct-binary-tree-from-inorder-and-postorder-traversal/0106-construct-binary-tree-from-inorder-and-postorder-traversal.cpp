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
    
    TreeNode* dfs(vector<int>&inorder,vector<int>&postorder,unordered_map<int,int>&gzip,int start,int end){
        
            if(start>end){
                
                    return nullptr;
            }
            int size=postorder.size();
            int val=postorder[size-1];
            postorder.pop_back();
            TreeNode* root=new TreeNode(val);
            int indx= gzip[val];
            cout<<indx<<endl;
            root->right=dfs(inorder,postorder,gzip,indx+1,end);
            root->left=dfs(inorder,postorder,gzip,start,indx-1);
            return root;
        
        
        
        
        
        
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
                unordered_map<int,int>gzip;
                int i=0;
                for(auto item:inorder){
                        gzip[item]=i;
                        i+=1;
                }
            
                return dfs(inorder,postorder,gzip,0,postorder.size()-1);
               
        
        
    }
};