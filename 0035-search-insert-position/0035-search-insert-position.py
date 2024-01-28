class Solution:
    
    
    def searchInsert(self, nums: List[int], target: int) -> int:
        
            
            start=0
            end=len(nums)-1
            while(start<end):
                    mid=(start+end)>>1
                    print(start,end,mid)
                    if nums[mid]>=target:
                        end=mid
                    else:
                        start=mid+1
            
            
            if end==len(nums)-1:
                    if target>nums[end]:
                            return end+1
            return end
                        
                        
            