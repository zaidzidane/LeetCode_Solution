class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        
        if len(trust)==0 and n==1:
            return 1
        
        dic=Counter(item[1] for item in trust)
         
        dic2=Counter(item[0] for item in trust)
            
        for key,value in dic.items():
            
            if value==n-1 and key not in dic2:
                return key
            
        
        return -1