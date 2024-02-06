class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        
        ans=[]
        sorted_interval=sorted(intervals,key=lambda x:(x[0],x[1]))
    
        for item in sorted_interval:
                if len(ans)==0:
                        ans.append(item)
                        continue
                
                if ans[-1][1]>=item[0] and ans[-1][1]<item[1]:
                        print(item)
                        val=ans[-1][0]
                        ans.pop(-1)
                        ans.append([val,item[1]])
                        
                elif  ans[-1][1]>=item[1]:
                        continue
                else:
                        ans.append(item)
        
        return ans