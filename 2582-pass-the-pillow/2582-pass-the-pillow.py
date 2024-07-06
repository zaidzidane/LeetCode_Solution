class Solution:
    
    
    def passThePillow(self, n: int, time: int) -> int:
        
            val = time//(n-1)
            step=time%(n-1)
            print(val,step)
            if val%2==0:
                return (1+step)
            else:
                return (n-(step))
        