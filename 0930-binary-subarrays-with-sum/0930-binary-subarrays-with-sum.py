class Solution:
    
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        
            dicti={}
            total=0
            cnt=0
            for item in nums:
                total+=item
                
                if total==goal:
                    cnt+=1
                    
                if total-goal in dicti:
                        cnt+=dicti[total-goal]
            
                dicti[total]=dicti.get(total,0)+1
                
            
            return cnt
                
                