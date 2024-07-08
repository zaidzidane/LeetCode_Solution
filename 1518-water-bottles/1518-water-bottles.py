class Solution:
    
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
    
        cnt=numBottles
        
        while(numBottles>=numExchange):
            print(numBottles)
            val1=numBottles//numExchange
            cnt+=val1
            val2=numBottles%numExchange
            numBottles=val1+val2
        
        
        return cnt    