class Solution:
    
    def mySqrt(self, x: int) -> int:
        
        start=0
        end=x
        while(start<=end):
            mid=(start+end)>>1
            print(mid)
            val=(mid*mid)
            if val==x:
                return mid
            if val<x:
                    start=mid+1
            else:
                    end=mid-1
                    
        return  end
                
                
                
        
        
        
        
        
            
            