class Solution:
    
    
    def helper(self,x,n):
        
        if n==0:
            return 1
        
        val=self.helper(x,n//2)
        if n%2:
            return val*val*x
        else:
            return val*val
            
        
        
    
    
    
    def myPow(self, x: float, n: int) -> float:
        
        
        if x==1:
            return 1
        
        if n<0:
            return 1/self.helper(x,abs(n))
        return self.helper(x,n)
        
        