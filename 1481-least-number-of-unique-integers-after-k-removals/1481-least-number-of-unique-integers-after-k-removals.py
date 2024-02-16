class Solution:
    
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        
                dic=Counter(arr)
                cnt=0
                arr=sorted(dic.values())
                # print(arr)
                for i,item in enumerate(arr):
                    
                    if(k>=item):
                        k-=item
                        cnt+=1
                    else:
                        break
                        
                
                return len(arr)-cnt
                    
                        
                    
                    