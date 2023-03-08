class Solution:
    
    def romanToInt(self, s: str) -> int:
        
        d={}
        d['I']=1
        d['V']=5
        d['X']=10
        d['L']=50
        d['C']=100
        d['D']=500
        d['M']=1000
        
        ans=0
        for i in range(len(s)):
            
            if(i>=1 and d[s[i-1]]<d[s[i]]):
                
                        ans+=d[s[i]]-2*d[s[i-1]]
                
                
            else:
                        ans+=d[s[i]]
        return ans