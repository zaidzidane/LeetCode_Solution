class Solution {
public:
    
    vector<vector<int>>ans;
    void dfs(vector<int>&candidates,int target,int sum,int index,vector<int>arr){
        
            
                 // cout<<index<<"\t"<<sum<<endl;
                if(sum>target or index>=candidates.size()){      
                        return;
                }
        
                if(sum==target){
                        ans.push_back(arr);
                        return;                
                }
        
                sum+=candidates[index];
                arr.push_back(candidates[index]);
                dfs(candidates,target,sum,index,arr);
                sum-=candidates[index];
                arr.pop_back();
                dfs(candidates,target,sum,index+1,arr);
                
        
        
        
        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>arr;
        dfs(candidates,target,0,0,arr);
        return ans;
        
        
    }
};