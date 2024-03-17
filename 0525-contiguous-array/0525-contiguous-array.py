class Solution:
    
    def findMaxLength(self, nums: List[int]) -> int:
            
            
                max_len=0
                total=0
                dicti={}
                j=0
                dicti[0]=-1
                while(j<len(nums)):
                    
                    if nums[j]==1:
                        total+=1
                    else:
                        total-=1

                    if total not in dicti:
                            dicti[total]=j
                    else:
                            max_len=max(max_len,j-dicti[total])
                    
                    j+=1
                        
                            
                return max_len            
                                
                                
                    
                        
                    