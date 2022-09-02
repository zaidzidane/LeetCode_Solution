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
    
    
    vector<double> averageOfLevels(TreeNode* root) {
        
            vector<double>ans;
            queue<TreeNode*>q;
            q.push(root);
            q.push(NULL);
            int cnt=0;
            double sum=0;
            while(!q.empty()){
                
                    TreeNode* temp=q.front();
                    q.pop();

                    if(temp==NULL){
                        
                        q.push(NULL);
                        ans.push_back(sum/cnt);
                        cout<<sum<<"\t"<<ans.back()<<"\t"<<cnt<<endl;
                        temp=q.front();
                        q.pop();
                        sum=0.0;
                        cnt=0;
                        
                    }
                
                    if(temp==NULL and q.size()==0){
                            break;
                        
                    }
                
                    sum+=temp->val;
                    cnt+=1;
                    
                    if(temp->left){
                        
                            q.push(temp->left);
                        
                    }
                
                    if(temp->right){
                        
                            q.push(temp->right);
                        
                    }
                
            }
        
            return ans;
        
        
    }
};