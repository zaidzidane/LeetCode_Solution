class Solution:
    
    def divideArray(self, nums: List[int], k: int) -> List[List[int]]:
            
        
            nums.sort()
            if len(nums)%3!=0:
                    return False
                
            i=2
            ans=[]
            while(i<len(nums)):
                if(nums[i]-nums[i-1]<=k and nums[i]-nums[i-2]<=k and nums[i-1]-nums[i-2]<=k):
                    ans.append([nums[i-2],nums[i-1],nums[i]])
                else:
                    return []
            
                i+=3
            
            
            
            return ans
                
            
            
        
        
        
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            