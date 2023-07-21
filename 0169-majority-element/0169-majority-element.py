class Solution:
    
    def majorityElement(self, nums: List[int]) -> int:
        
        majority=nums[0]
        cnt=1
        
        for i in range(1,len(nums)):
            
            if(nums[i]!=majority):
                        if not cnt:
                                majority=nums[i]
                                cnt+=1
                        else:
                                cnt-=1
            
            
            else:
            
                    cnt+=1
                
        return majority