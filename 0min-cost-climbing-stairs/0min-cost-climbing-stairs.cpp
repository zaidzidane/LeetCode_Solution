class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
            int n=cost.size();
            vector<int>dp(n+1);
            
        
            for(int i=2;i<dp.size();i++){
                
                    int laststep=dp[i-1]+cost[i-1];
                    int secondlaststep=dp[i-2]+cost[i-2];
                    dp[i]=min(laststep,secondlaststep);
                
            }
        
            return dp[n];
    }
};