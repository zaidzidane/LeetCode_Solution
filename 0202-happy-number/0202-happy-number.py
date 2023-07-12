class Solution:
    def isHappy(self, n: int) -> bool:
        
        
        s=set()
        sum=0
        temp=n
        while(n):
            
            sum+=(n%10)*(n%10)
            n//=10
            if n==0 and sum==1:
                    return True
            
            if n==0 and sum!=1 and temp not in s:
                #print(sum)
                s.add(temp) 
                n=sum
                temp=n
                sum=0
                
            elif n==0 and sum!=1 and temp in s:
                    return False
                
                
        return False
            
            
            
            