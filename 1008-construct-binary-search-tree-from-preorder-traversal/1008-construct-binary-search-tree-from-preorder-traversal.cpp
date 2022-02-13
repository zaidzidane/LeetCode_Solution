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
    
   TreeNode* dfs(TreeNode* head,int val){
        
        if(head==NULL){
                TreeNode* head=new TreeNode(val);
                return head;      
        }
        else{
                if( head->val>val){
                       head->left=dfs(head->left,val); 
                }
                else if( head->val<val){ 
                        head->right=dfs(head->right,val);   
                }   
        }
  
        return head;
    }
    
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* head=NULL;
        for(int i=0;i<preorder.size();i++){ 
               head=dfs(head,preorder[i]);
               //cout<<head->val<<endl;
        }
        
        return  head;
    }
};