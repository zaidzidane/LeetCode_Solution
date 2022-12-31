class Solution {
    
public:
    
    
      set<vector<int>>ans;
    void dfs(vector<int>&candidates,int target,int sum,int index,vector<int>&arr){
        
                // cout<<index<<"\t"<<sum<<endl;
                 if(sum==target){
                        
                        ans.insert(arr);
                        return;                
                }
            
                
                if(sum>target or index>=candidates.size()){      
                        return;
                }
        
               
        
               
                for(int i=index;i<candidates.size();i++){
                    
                        if(i!=index and candidates[i]==candidates[i-1]){
                    
                                continue;
                        }
                    
                        sum+=candidates[i];
                        
                        arr.push_back(candidates[i]);
                        dfs(candidates,target,sum,i+1,arr);
                        sum-=candidates[i];
                        arr.pop_back();
                    
                    
                    
                }
               
                
        
        
        
        
    }
    
    

    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
                int s=0;
                for(int i=0;i<candidates.size();i++){
                        
                        s+=candidates[i];
                    
                }
        
                if(s<target){
                        return {};
                }
        
                vector<int>arr;
                sort(candidates.begin(),candidates.end());
                dfs(candidates,target,0,0,arr);
                return vector<vector<int>>(ans.begin(),ans.end());

    }
};