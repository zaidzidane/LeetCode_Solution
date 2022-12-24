class Solution {
public:
    
    set<vector<int>>ans;
    void dfs(vector<int>&nums,int index,vector<int>arr){
        
        if(nums.size()==index){
                return;
        }
        
        arr.push_back(nums[index]);
        vector<int>v=arr;
        sort(v.begin(),v.end());
        ans.insert(v);
        dfs(nums,index+1,arr);
        arr.pop_back();
        dfs(nums,index+1,arr);
        
        
        
        
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<int>arr;
        ans.insert(arr);
        dfs(nums,0,arr);
        vector<vector<int>>a(ans.begin(),ans.end());
        return a;
        
    }
};