class Solution:
    
    
    def subarraySum(self, nums: List[int], k: int) -> int:
    
        
        dic={}
        total=0
        cnt=0
        dic[0]=1
        for item in nums:
            
            total+=item
            
            if total-k in dic:
                cnt+=dic[total-k]
            
            if total not in dic:
                    dic[total]=0
            
            dic[total]+=1
        
        return cnt
                
            