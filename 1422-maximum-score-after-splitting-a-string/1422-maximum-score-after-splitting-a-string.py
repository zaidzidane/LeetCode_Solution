class Solution:
    
    def maxScore(self, s: str) -> int:
        
        cnt0=[]
        for c in s:
             
             if c=='0':
                    if len(cnt0)==0:
                            cnt0.append(1)
                    else:
                            cnt0.append(cnt0[-1]+1)
            
             else:
                    if len(cnt0)==0:
                            cnt0.append(0)
                    else:
                            cnt0.append(cnt0[-1])
                    
        cnt0.pop()
        cnt1=[]
        for c in reversed(s):
                if c=='1':
                        if len(cnt1)==0:
                                cnt1.append(1)
                        else:
                                cnt1.append(cnt1[-1]+1)
                                
                else:
                        if len(cnt1)==0:
                            cnt1.append(0)
                        else:
                            cnt1.append(cnt1[-1])
        cnt1.pop()              
        print(cnt0)
        print(cnt1)
        maxim=0
        size=len(cnt0)
        for i in range(size):
                
                maxim=max(maxim,cnt0[i]+cnt1[size-1-i])
                
        return maxim
        
        
            