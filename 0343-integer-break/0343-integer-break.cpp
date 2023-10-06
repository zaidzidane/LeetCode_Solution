class Solution {
public:
    
    int dfs(int n,vector<int>&dp){
    
            if(n<=0){
                    return 0;
            }
            if(n==1)
                    return 1;
        
            if(dp[n]!=-1){
                
                    return dp[n];
            }
        
            int maxim=-1;
           
            for(int i=1;i<n;i++){
                    
                   
                    maxim=max({maxim,i*dfs(n-i,dp),i*(n-i)});
                
            }
        
            dp[n]=maxim;
            return dp[n];
        
        
    }
    
    int integerBreak(int n) {
        
            vector<int>dp(n+1,-1);
            int val=dfs(n,dp);
            dp[0]=0;
            dp[1]=0;
            for(int i=0;i<dp.size();i++){
                    cout<<dp[i]<<"\t";
           }
            return val;        
        
    }
};