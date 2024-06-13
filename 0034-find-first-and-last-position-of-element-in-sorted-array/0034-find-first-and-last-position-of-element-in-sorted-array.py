class Solution:
    
    def searchRange(self, nums: List[int], target: int) -> List[int]:
    
        indx1=bisect.bisect_left(nums,target)
        
        indx2=bisect.bisect_right(nums,target)-1
        
        
        if indx1>indx2:
                return [-1,-1]
        
        return [indx1,indx2]