class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        
            left=0
            right=len(arr)-1
            
            while(left<=right):
                    
                    mid=left+(right-left)//2
                    print(mid)
                    if (arr[mid]-mid-1<k):
                            
                        left=mid+1
                        
                        
                    else:
                        right=mid-1
                        
                
                        
            return left+k          
                    

                    
                
                
            