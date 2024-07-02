class Solution:
    
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
    
        temp=[]
        arr1=[0]*1001
        arr2=[0]*1001
        
        for item in nums1:
            arr1[item]+=1
            
        ans=[]    
        for item in nums2:
            
            if arr1[item]>0:
                ans.append(item)
            
            arr1[item]-=1
        
        return ans    
            
        
            
                
        
            
        
            
            
                    