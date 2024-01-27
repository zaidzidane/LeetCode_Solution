
class Solution:
    
    
    def maxLength(self, arr: List[str]) -> int:
            
        maxLength=0
        cntArr=[0]*26
        def combination(arr,indx,length,cntArr):
        
                nonlocal maxLength
                if indx>=len(arr):
                    maxLength=max(maxLength,length)
                    return
                
                newCntArr=cntArr.copy()
                # print(cntArr)
                flag=False
                for char in arr[indx]:
                    if char in newCntArr:
                            combination(arr,indx+1,length,cntArr)
                            flag=True
                            break
                    else:
                            newCntArr.add(char)
                 
                if not flag:
                    combination(arr,indx+1,length+len(arr[indx]),newCntArr)
                combination(arr,indx+1,length,cntArr)
                
        
        combination(arr,0,0,set())
        return maxLength
                        
                    
                    
                    
                    
                    
                    
                    
            