class Solution {
public:

    
    int dps(vector<int>&nums,vector<int>&multipliers,int i,int j,vector<vector<int>>&dp){
                
            
                int n=nums.size()-1;
                if(j==multipliers.size()){   
                    
                        return 0;    
                }
        
                if(dp[j][i]!=INT_MIN){
                        return dp[j][i];
                }
     
                int l=dps(nums,multipliers,i+1,j+1,dp)+nums[i]*multipliers[j];
                int r=dps(nums,multipliers,i,j+1,dp)+nums[n-(j-i)]*multipliers[j];
                return dp[j][i]=max(l,r);
     
    }
    
    
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers){
        
                int i=0;
                int j=0;
                int end=nums.size()-1;
                int sum=0;
               
                vector<vector<int>>dp(multipliers.size()+1,vector<int>(multipliers.size()+1,INT_MIN));
                return dps(nums,multipliers,i,j,dp);
                // return dp[0][0];
        
        
    }
};