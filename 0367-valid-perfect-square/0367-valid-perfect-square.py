class Solution:
    
    
    def isPerfectSquare(self, num: int) -> bool:
        
        
        start=0
        end=num    
        while(start<=end):
                
                mid=(start+end)>>1
                val=mid*mid
                print(mid)
                if val==num:
                    return True
                elif val<num:
                    start=mid+1
                else:
                    end=mid-1
        
                
        return False 
                
        
        
        
         
            