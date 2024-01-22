class Solution:
    
    
    def findErrorNums(self, nums: List[int]) -> List[int]:
            
            dicti={}
            dup=0
            for i in range(0,len(nums)):
                
                if nums[i] in dicti:
                    
                    dup=nums[i]
                    break
                else:
                    dicti[nums[i]]=1
                
                
            
            val=dup
            for i in range(len(nums)):
                val^=(i+1)^nums[i]
                
            
            return[dup,val]
                    
                        
                    
            
            
            
            
            
            
            
            return [-1,-1]
            
            
            
            
            
            
            
            
            
            
            
                