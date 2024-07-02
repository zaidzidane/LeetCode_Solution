class Solution:
    
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        
        cnt=0
        for item in arr:
            
            if item%2==1:
                    cnt+=1
            else:
                    cnt=0
                    
            if cnt==3:
                    return True
        
            
        return False