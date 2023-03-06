class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        
            i=1
            j=0
            while(k):
                
               
                if i!=arr[j]:
                    k-=1
                    
                elif j<len(arr)-1:
                    j+=1  
                    
                # print(i,k)
                i+=1
                
            return i-1

                    
                
                
            