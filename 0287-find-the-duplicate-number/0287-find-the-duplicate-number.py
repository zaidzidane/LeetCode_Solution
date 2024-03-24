class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        
            for item in nums:
                
          
                val=abs(item)
                if nums[val]<0:
                        return val
                    
                nums[val]*=-1
                
                        
            
            return -1
        