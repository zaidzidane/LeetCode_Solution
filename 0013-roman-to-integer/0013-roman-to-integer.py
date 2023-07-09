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
        
            sum=0
            for i in reversed(range(len(s))):
                
                
                if i<len(s)-1 and d[s[i]]<d[s[i+1]]:
                        sum-=d[s[i]]
                        
                else:
                        sum+=d[s[i]]
                 
               
             
            return sum
                
                