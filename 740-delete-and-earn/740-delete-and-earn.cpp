class Solution {
public:
    
    int dfs(vector<int>&ans,vector<int>dp,int min_,int end){
        
        
       
        for(int i=end;i>=0;i--){
                
                dp[i]=max(ans[i]+dp[i+2],dp[i+1]);
                //cout<<dp[i];
        }
        
        return dp[min_];
    }
    
    
    int deleteAndEarn(vector<int>& nums) {
        
            //sort(nums.begin(),nums.end()); 
            int max_=*max_element(nums.begin(),nums.end());
            int min_=*min_element(nums.begin(),nums.end());
            //cout<<max_<<"\t"<<min_;
            vector<int>ans(max_+1,0);
            for(int i=0;i<nums.size();i++){
                    ans[nums[i]]+=nums[i];
            }
       
            vector<int>dp(max_+3,0);
            return dfs(ans,dp,min_,max_);
            

        
        return 0; 
    }
};