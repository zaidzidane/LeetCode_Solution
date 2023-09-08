class Solution {
public:
    
    
    set<vector<int>>ans;
    void backtrack(vector<int>&candidates,int idx,vector<int>total,int sum,int target){
    
        if(sum>target or idx>=candidates.size()){
                return;
        }                
        if(sum==target){
                ans.insert(total);
                return;
        }
        
        total.push_back(candidates[idx]);
        backtrack(candidates,idx,total,sum+candidates[idx],target);
        total.pop_back();
        backtrack(candidates,idx+1,total,sum,target);
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
            vector<int>total;
            int sum=0;
            backtrack(candidates,0,total,sum,target);
        
            vector<vector<int>>a(ans.begin(),ans.end());
            return a;
        
    }
};