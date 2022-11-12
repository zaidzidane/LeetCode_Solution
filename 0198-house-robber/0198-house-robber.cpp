class Solution {
public:
    int rob(vector<int>& nums) {
        
        
            int n=nums.size();
            vector<int>dp(n+2);
            for(int i=2;i<dp.size();i++){
                
                        dp[i]=max(dp[i-1],dp[i-2]+nums[i-2]);                     
            
                
            }    
        
            for(int i=0;i<dp.size();i++){
                    cout<<dp[i]<<"\t";
            }
        
            return dp[n+1];        
        
    }
};