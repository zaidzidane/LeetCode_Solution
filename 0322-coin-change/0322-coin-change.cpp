class Solution {
public:
 
   
    
    int coinChange(vector<int>& coins, int amount) {
            
            if(amount==0) return 0;
        
            vector<int>dp(amount+1,INT_MAX);
        
            for(int i=0;i<coins.size();i++){
                    if(coins[i]<=amount)
                        dp[coins[i]]=1;
            }
        
            for(int i=0;i<amount+1;i++){
                    for(int j=0;j<coins.size();j++){
                            if(i-coins[j]>=0 and dp[i-coins[j]]!=INT_MAX )
                                dp[i]=min(dp[i],dp[i-coins[j]]+1);
                    }    
                   
            }
        
            return dp[amount]==INT_MAX?-1:dp[amount];  
    }
};