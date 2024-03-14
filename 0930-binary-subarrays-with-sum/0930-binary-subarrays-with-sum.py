class Solution:
    
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        
        def sliding(nums,goal):
            start,current_sum,total_count=0,0,0
            for end in range(len(nums)):
                current_sum+=nums[end]
                
                while start<=end and current_sum>goal:
                            current_sum-=nums[start]
                            start+=1
                
                total_count+= end-start+1
            
            return total_count
        
        return sliding(nums,goal)-sliding(nums,goal-1)
        
                
                