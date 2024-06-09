class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        
        
        dict1={}
        
        for indx,num in enumerate(nums):
            
            if num not in dict1:        
                    dict1[num]=indx
                    
            else:
                    print(indx,dict1[num])
                    if indx-dict1[num]<=k:
                        return True
                    dict1[num]=indx
            
            
        return False