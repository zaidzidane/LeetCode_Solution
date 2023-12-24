class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        
        pq=[]
        for elem in nums:
            
            if len(pq)<k:
                    heapq.heappush(pq,elem)
                    continue
                
            if len(pq)==k and elem>pq[0]:
                    heapq.heappop(pq)
                    heapq.heappush(pq,elem)
          
                    
            
            
        print(pq)
        return pq[0]    
            
                    
                    
            
        