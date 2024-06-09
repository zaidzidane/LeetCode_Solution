class Solution:
    
    
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        
        
        new_points=sorted(points,key=lambda x:x[0])
        ans=[new_points[0]]
        i=1
        while(i<len(new_points)):
            
        
            if new_points[i][0]>ans[-1][1]:
                    ans.append(new_points[i])
            else:
                    val=ans.pop(-1)
                    
                    ans.append([max(val[0],new_points[i][0]),min(val[1],new_points[i][1])])

            i+=1
           
        print(ans)
        return len(ans)
            