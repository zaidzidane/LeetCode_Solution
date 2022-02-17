class Solution {
public:
    
    set<vector<int>>ans;
    
    
    void backtrack(vector<int>& candidates,vector<int>v,int sum){
        
            if(sum<0){
                return;
            }
            if(sum==0){
                    sort(v.begin(),v.end());
                    ans.insert(v);
                    return;
                    
            }
            else{
                
             for(int i=0;i<candidates.size();i++){
                        v.push_back(candidates[i]);
                        backtrack(candidates,v,sum-candidates[i]);
                        v.pop_back();
                                
                    }
   
            }
 
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
            vector<int>v;
            int sum=0;
            sort(candidates.begin(), candidates.end());
            backtrack(candidates,v,target);
            
        vector<vector<int>>a(ans.begin(),ans.end());
            return a;
        
        
        
    }
};