class Solution:
    def maxProfit(self, prices: List[int]) -> int:
    
            prefix=[]
            prefix.append(0)
            for i in range(1,len(prices)):
                    prefix.append(prices[i]-prices[i-1])
        
            total=0
            maxim=0
            for item in prefix:
                    total+=item
                    if total<0:
                        total=0
                    
                    maxim=max(total,maxim) 
            
            
            return maxim
            
                