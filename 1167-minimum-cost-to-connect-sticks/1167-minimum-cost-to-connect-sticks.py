class Solution:
    
    def connectSticks(self, sticks: List[int]) -> int:
        
        
        heapq.heapify(sticks)
        sum1=0
        while len(sticks)>1:
                
                a=heapq.heappop(sticks)
                b=heapq.heappop(sticks)
                print(a+b)
                sum1+=a+b
                
                heapq.heappush(sticks,(a+b))
                
        
        return sum1      
                
                
                
        