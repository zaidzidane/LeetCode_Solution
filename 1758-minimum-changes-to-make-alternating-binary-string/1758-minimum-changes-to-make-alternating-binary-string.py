class Solution:
    
    def minOperations(self, s: str) -> int:
        
    
        cnt=0
        for i in range(len(s)):
             if  i%2==0 and s[i]=='0':
                    continue
             elif i%2==1 and s[i]=='1':
                    continue
             else:
                    cnt+=1
                    
        cnt1=0
        for i in range(len(s)):
            if  i%2==0 and s[i]=='1':
                    continue
            elif i%2==1 and s[i]=='0':
                    continue
            else:
                    cnt1+=1
           
        print(cnt,cnt1)
        return min(cnt,cnt1)
        
            
                    
            
            
                
            