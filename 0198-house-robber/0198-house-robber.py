class Solution:
    
    def rob(self, nums: List[int]) -> int:
        
            dp=[0]*(len(nums)+2)
            
            
            for i in range(len(nums)):
                
                val=i+2
                dp[val]=max(dp[val-1],dp[val-2]+nums[i])
                
                
            
            return max(dp[-2:])