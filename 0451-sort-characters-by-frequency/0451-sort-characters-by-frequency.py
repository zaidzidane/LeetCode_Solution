class Solution:
    def frequencySort(self, s: str) -> str:
        
        
            dic=Counter(s)
            hp=[]
            for key,value in dic.items():
                
                heapq.heappush(hp,[-1*value,key])
                
            
            ans=''
            while(len(hp)):
                
                v,k=heapq.heappop(hp)
                for cnt in range(abs(v)):
                    ans+=k
            
            
            return ans
            
        
            
            