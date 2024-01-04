class Solution:
    
    
    def cntOne(self,val,dp):
        
            if val<0:
                return float(inf)
            if val==0:
               return 0
            
            if val not in dp:
                dp[val]=0
            else:
                return dp[val]
            dp[val]=min(self.cntOne(val-3,dp)+1,self.cntOne(val-2,dp)+1)
            return dp[val]
           
    def minOperations(self, nums: List[int]) -> int:
        
        dicti={}
        for item in nums:
            if item not in dicti:
                dicti[item]=0
            dicti[item]+=1
        
        
        print(dicti)
        cnt=0
        for key,value in dicti.items():
            
            dp={}
            val=self.cntOne(value,dp)
            if(val>=float(inf)):
                    return -1
            print(val)
            cnt+=val
                    
        return cnt
        
        
        