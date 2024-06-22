class Solution:
    
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
    
            i=0
            dic={}
            dic[0]=1
            total=0
            cnt=0
            while i<len(nums):
                
                if nums[i]%2==1:
                    total+=1
                if total-k in dic:
                        cnt+=dic[total-k]
            
                if total not in dic:
                    dic[total]=0
                dic[total]+=1
                i+=1
            
            
            print(dic)
            return cnt
        
            