class Solution:
    
    
    
    def frequencySort(self, nums: List[int]) -> List[int]:
    
        dic={}
        for item in nums:
            
            if item not in dic:
                dic[item]=0
            dic[item]+=1
        
        pq=[[value,key] for key,value in dic.items()]
        
        pq=sorted(pq,key=lambda x:(x[0],-1*x[1]))
        return [item  for cnt,item in pq for i in range(cnt)]