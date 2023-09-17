class Solution {
public:
    
    int dfs(int amount,vector<int>&coins,vector<vector<int>>&dp,int idx){
        
        
            if(amount==0){
                    return 1;
            }
        
            if(amount<0 or idx>=coins.size()){
                    return 0;   
            }
            
        
            if(dp[idx][amount]!=-1){
                    return dp[idx][amount];
            }
        
//             if(coins[idx]>amount){
                    
//                     return dp[idx][amount]=dfs(amount,coins,dp,idx+1);
//             }
        
            
            dp[idx][amount]=dfs(amount-coins[idx],coins,dp,idx)+dfs(amount,coins,dp,idx+1);
            
            
            return dp[idx][amount];
        
        
    }
    
    
    
    int change(int amount, vector<int>& coins) {
            sort(coins.begin(),coins.end());
            vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
            return dfs(amount,coins,dp,0);   
        
    }
};