class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        
        
        min_heap=[]
        
        for item in nums:
                
                
            if len(min_heap)<k:
                heapq.heappush(min_heap,item)
            else:
                if min_heap[0]<item:
                        heapq.heappop(min_heap)
                        heapq.heappush(min_heap,item)
        
        
        return min_heap[0]