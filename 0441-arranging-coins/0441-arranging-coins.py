class Solution:
    
    
    def arrangeCoins(self, n: int) -> int:
    
            
        start=1
        end=n
        while(start<=end):
            
            mid=(start+end)>>1
            print(mid)
            val=mid*(mid+1)//2
            if val==n:
                return mid
            if val<n:
                start=mid+1
            else:
                end=mid-1
                
        
        return end
        
                
            
        
        
             
            
        
        
        
    
        
            
            
            
        
        