class Solution:
    
    def findRightInterval(self, intervals: List[List[int]]) -> List[int]:
        
            dp={}
            cnt=0
            for interval in intervals:
                    dp[interval[0]]=cnt
                    cnt+=1
            sortInterval=sorted(intervals,key= lambda x:x[0])
            
            ansDict={}
            arr=[x[0] for x in sortInterval]
            print(arr)
            for start,end in intervals:
                        idx=bisect.bisect_left(arr,end)
                        print(idx)
                        if(idx==len(intervals)):
                            ansDict[start]=-1
                        else:
                            ansDict[start]=dp[arr[idx]]
                            #ansDict.append(dp[intervals[idx][0]])
                            
                    
            ans=[]
            for item in intervals:
                    ans.append(ansDict[item[0]])
            
            
            return ans   
                                        
                
                
            
                
            
        