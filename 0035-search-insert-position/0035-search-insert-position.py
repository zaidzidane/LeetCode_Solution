class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        left=0
        right=len(nums)
        while (left<right):
            
            mid=left+(right-left)//2
            # print(mid)
            if(nums[mid]==target):
                    return mid
            elif(nums[mid]>target):
                    right=mid
                    
            else:
                    left=mid+1
        
        
        return left