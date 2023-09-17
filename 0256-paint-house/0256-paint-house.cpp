class Solution {
public:
    
    
    
    
    int minCost(vector<vector<int>>& costs) {
        
            vector<vector<int>>dp(costs.size()+1,vector<int>(costs[0].size(),INT_MAX));
            dp[0][0]=0;
            dp[0][1]=0;
            dp[0][2]=0;
            int n=costs.size();
            for(int i=1;i<=costs.size();i++){
                for(int k=0;k<costs[0].size();k++){

                    if(k==0)
                    dp[i][0]=min(dp[i-1][1],dp[i-1][2])+costs[i-1][k];
                    if(k==1)
                    dp[i][1]=min(dp[i-1][0],dp[i-1][2])+costs[i-1][k];
                    if(k==2)
                    dp[i][2]=min(dp[i-1][0],dp[i-1][1])+costs[i-1][k];
                }
            }
            
            return min(dp[n][0],min(dp[n][1],dp[n][2]));
    }
};