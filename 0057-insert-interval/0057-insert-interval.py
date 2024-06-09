class Solution:
    
    
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
    
        if len(intervals)==0:
                return [newInterval]
        
        i=0
        ans=[]
        flag=False
        for item in intervals:
            
            
            if not flag:
                if item[1]<newInterval[0]:
                    
                        ans.append(item)
                else:
                        flag=True
                        if newInterval[1]<item[0]:
                                ans.append(newInterval)
                                ans.append(item)
                        else:
                                ans.append([min(item[0],newInterval[0]),max(item[1],newInterval[1])])
                                
            else:
                
                if item[0]>ans[-1][1]:
                        ans.append(item)
                        
                else:
                    
                    val=ans.pop(-1)
                    ans.append([val[0],max(val[1],item[1])])
        
        
        if not flag:
                ans.append(newInterval)
        
        return ans        