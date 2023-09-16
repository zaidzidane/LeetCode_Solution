class Solution {
public:
    
    long helper(vector<vector<int>>&questions,vector<long>&dp,int i){
        
            if(i>=questions.size()) return 0;
            if(dp[i]!=0){
                    return dp[i];
            }
        
            long val1=questions[i][0]+helper(questions,dp,i+questions[i][1]+1);
            long val2=helper(questions,dp,i+1);
            dp[i]=max(val1,val2);        
            return dp[i];
            
    }
    
    
    long long mostPoints(vector<vector<int>>& questions) {    
        int n=questions.size();
        vector<long>dp(n,0);
        return helper(questions,dp,0);
        
    }
};