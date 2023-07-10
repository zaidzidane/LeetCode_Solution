class Solution:
    
    dicty={}
    def stairs(self,n):
        
            if n==1:
                return 1
            
            if n==2:
                return 2
            
            if n in self.dicty:
                return self.dicty[n]
            
            self.dicty[n]=self.stairs(n-1)+self.stairs(n-2)
            return self.dicty[n]
    
    
    
    
    
    def climbStairs(self, n: int) -> int:
        
            return self.stairs(n)
                
        