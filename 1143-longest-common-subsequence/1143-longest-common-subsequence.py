class Solution:
    
    
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        
            dp=[[-1]*len(text2) for i in range(len(text1))]
            def helper(text1,text2,i,j,dp):
                
                
                if i>=len(text1) or j>=len(text2):
                        return 0
                
                if(dp[i][j]!=-1):
                        return dp[i][j]
                
                if text1[i]==text2[j]:
                        dp[i][j]=helper(text1,text2,i+1,j+1,dp)+1
                    
            
                else:
                        dp[i][j]=max(helper(text1,text2,i,j+1,dp),helper(text1,text2,i+1,j,dp))
                
                
                return dp[i][j]
                
            
            return helper(text1,text2,0,0,dp)