class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        
        indx=-1
        start=0
        i=0
        maxLen=0
        while(i<len(nums)):
            
            if nums[i]==0 and indx==-1:
                    indx=i
                    
                    
            elif nums[i]==0 and indx!=-1:
                print(i,start)
                maxLen=max(maxLen,i-start)    
                start=indx+1
                indx=i
             
            i+=1
                
        
        maxLen=max(maxLen,i-start)
        return maxLen
                    
                
            
        
            