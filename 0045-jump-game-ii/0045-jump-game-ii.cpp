class Solution {
public:
    int jump(vector<int>& nums) {
        
            int n=nums.size();
            vector<int>dp(n,INT_MAX);
            dp[n-1]=0;
            
            for(int i=n-2;i>=0;i--){
                
                    
                    for(int k=0;k<=nums[i];k++){
                        
                                if(i+k<=(n-1) and dp[i+k]!=INT_MAX){
                                    
                                        dp[i]=min(dp[i],dp[i+k]+1);                    
                                    
                                    
                                }
                        
                    }
                
            }
                    
            return dp[0];
        
    }
};