class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        
            n=len(arr)
            candidates=[arr[0],arr[n//4],arr[n//2],arr[3*n//4],arr[n-1]]
            target=n//4
            
            for candidate in candidates:
                    
                    left=bisect_left(arr,candidate,0,n)
                    right=bisect_right(arr,candidate,0,n)
                    
                    if (right-left)>target:
                            return arr[left]
                        
            return -1
    
                        
                        
                    