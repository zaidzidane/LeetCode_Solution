class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        
            if len(arr)==1:
                    return arr[0]
            i=0
            j=1
        
            while j<len(arr):
                
                    if arr[i]!=arr[j]:
                        
                        if (j-i)>(0.25)*len(arr):
                                return arr[i]
                        
                        i=j
                        
                    j+=1
                    
                    
            return arr[i]          
    
                        
                        
                    