class Solution:
    
    def canReach(self, arr: List[int], start: int) -> bool:
        
            
            queue=collections.deque([start])
            seen=set()
            while(len(queue)):
                
                    temp=queue.popleft()
                    
                    if arr[temp]==0:
                            return True
                    
                    if arr[temp]+temp>=0 and arr[temp]+temp<len(arr) and arr[temp]+temp not in seen :
                            queue.append(arr[temp]+temp)
                            seen.add(arr[temp]+temp)
                    
                    if temp-arr[temp]>=0 and temp-arr[temp]<len(arr) and temp-arr[temp] not in seen :
                            queue.append(temp-arr[temp])
                            seen.add(temp-arr[temp])
            
            return False