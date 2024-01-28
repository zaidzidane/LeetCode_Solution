class Solution:
    
    
    def search(self, nums: List[int], target: int) -> int:
        
        
        start=0
        end=len(nums)-1
        
        while(start<end):
            
            mid=(start+end)>>1
            print(mid)
            if(nums[mid]>=target):
                    end=mid
            else:
                    start=mid+1
                    
            
        
        return end if nums[end]==target else -1
            
        
        
        
        
        
        
                    
                        
                    
                        
                
        