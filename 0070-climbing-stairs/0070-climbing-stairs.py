class Solution:
    
    dicti={}
    def climbStairs(self, n: int) -> int:
        
        if(n==1):
                return 1
        if n==2:
                return 2
        
        if n in self.dicti:
            return self.dicti[n]
        
        
        self.dicti[n]=self.climbStairs(n-1)+self.climbStairs(n-2)
        return self.dicti[n]