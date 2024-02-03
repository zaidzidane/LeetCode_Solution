class Solution:
    
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
    
        
        start=0
        end=len(arr)-1
        
        while(start<end):
            
            mid=start+(end-start)//2
            if arr[mid]>=x:
                    end=mid
            else:
                    start=mid+1
        
        
        if end==0 and arr[end]!=x:
            return arr[:4]
        if start==len(arr):
            return arr[-4:]
        
        ans=[]
        left=end-1
        right=end
        while(len(ans)<k):
            #print(arr[left],arr[right],x,abs(arr[right]-x)<abs(arr[left]-x),right<len(ans))
            if (right<len(arr) and abs(arr[right]-x)<abs(arr[left]-x)) or left==-1:
                    ans.append(arr[right])
                    right+=1
                    
            else:
                    print(left)
                    ans.append(arr[left])
                    left-=1
                
                
        
        
        
        return sorted(ans)
        