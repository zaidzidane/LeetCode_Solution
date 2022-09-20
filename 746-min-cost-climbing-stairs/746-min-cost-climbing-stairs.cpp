class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int>dp(cost.size()+2,0);
        
        for(int i=0;i<cost.size();i++){
            
                dp[i+2]=min(dp[i+1],dp[i])+cost[i];
                
        }
        
        
        return min(dp[cost.size()+1],dp[cost.size()]);
    }
};