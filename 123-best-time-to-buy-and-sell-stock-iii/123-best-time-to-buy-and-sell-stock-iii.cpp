class Solution {
public:
    
    int solve(vector<int>&prices,int day,int tleft,vector<vector<int>>&dp){
        
            if(day==prices.size()){
                
                        return 0;
            }
        
            if(tleft==0) return 0;
        
        
            int ans = dp[day][tleft]; 
             if(ans != -1){ // if problem has already been solved 
            return ans;
        }
        
            int ans1=solve(prices,day+1,tleft,dp);
        
            int ans2=0;
            bool buy=(tleft%2==0);
            
            if(buy){
                
                    ans2=-prices[day]+solve(prices,day+1,tleft-1,dp);
            }
            else{
                
                    ans2=prices[day]+solve(prices,day+1,tleft-1,dp);
            }
        
            return dp[day][tleft]=max(ans1,ans2);
        
    }
    
    
    
    
    
    int maxProfit(vector<int>& prices) {
        
        vector<vector<int>>dp(prices.size(),vector<int>(5,-1));
        int ans=solve(prices,0,4,dp);
        return ans;    
        
        
    }
};