class Solution:
    
    def findMaxK(self, nums: List[int]) -> int:
        
        dic={}
        maxim=-1
        for item in nums:
                if -1*item in nums:
                        maxim=max(maxim,abs(item))
                dic[item]=1
        return maxim