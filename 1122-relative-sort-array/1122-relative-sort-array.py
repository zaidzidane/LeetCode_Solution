class Solution:
    
    
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
    
            item_list=[0]*(max(arr1)+1)
            for item in arr1:
                item_list[item]+=1
                
            ans=[]
            for item in arr2:
                    while(item_list[item]!=0):
                            ans.append(item)
                            item_list[item]-=1
                    
                    
            
            for indx,item in enumerate(item_list):
                while(item!=0):
                            ans.append(indx)
                            item-=1
                            
            
            
            return ans
            
    