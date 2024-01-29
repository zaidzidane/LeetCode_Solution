class Solution:
    
    def findKthPositive(self, arr: List[int], k: int) -> int:
    
            start=0
            end=len(arr)-1
            while(start<end):
                mid=(start+end)>>1
                val=arr[mid]
                if (val-mid)<=k:
                    start=mid+1
                else:
                    end=mid
            
           
            if arr[start]-start-1<k:
                cnt=(k-(arr[start]-start-1))
                print(cnt)
                return arr[start]+cnt
            
            print("here")
            va=arr[start-1]-start
            
            return arr[start-1]+k-va
            
            