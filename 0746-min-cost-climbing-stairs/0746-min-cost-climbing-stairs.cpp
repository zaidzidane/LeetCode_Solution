class Solution {
public:
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        

                vector<int>dp(cost.size()+2,INT_MAX);
        
                dp[0]=0;
                dp[1]=0;
                for(int i=0;i<cost.size();i++){
                    
                            
                            dp[i+2]=min(dp[i+1],dp[i])+cost[i];
                    
                    
                }
                
                return min(dp[cost.size()],dp[cost.size()+1]);
        
        
    }
};