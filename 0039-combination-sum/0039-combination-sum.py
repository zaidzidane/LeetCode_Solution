class Solution:
    
    def __init__(self):
        
        self.ans=[]
        
        
    def helper(self,candidates,index,target,total,arr):
        
        if index>=len(candidates) or total>target:
                return
            
        if target==total:
                self.ans.append(arr[:])
                print(self.ans)
                return
        
        total+=candidates[index]
        arr.append(candidates[index])
        self.helper(candidates,index,target,total,arr)
        total-=candidates[index]
        arr.pop(-1)
        self.helper(candidates,index+1,target,total,arr)
        
    
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        
        arr=[]
        self.helper(candidates,0,target,0,arr)
        return self.ans
        