class Solution {
public:
    
    vector<vector<int>>ans;
    
    void dfs(vector<int>&nums,int i,vector<int>arr){
        
            if(i==nums.size()){
                    return;
            }
            
        
            arr.push_back(nums[i]);
            ans.push_back(arr);
            dfs(nums,i+1,arr);
            arr.pop_back();
            dfs(nums,i+1,arr);
        
        
    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
        vector<int>arr;
        ans.push_back(arr);
        dfs(nums,0,arr);
        return ans;
        
    }
};