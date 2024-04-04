class Solution:
    def maxDepth(self, s: str) -> int:
        
            cnt=0
            max_cnt=0
            for item in s:
                
                if item=='(':
                        cnt+=1
                if item==')':
                        cnt-=1
                
                max_cnt=max(max_cnt,cnt)
                
            return max_cnt
            
            
        