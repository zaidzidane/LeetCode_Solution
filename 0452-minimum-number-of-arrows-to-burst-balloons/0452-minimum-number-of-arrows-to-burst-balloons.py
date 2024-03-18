class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        
            points.sort(key= lambda x:x[0])
            print(points)
            cnt=1
            indx=1
            current_point=points[0]
            if len(points)==1:
                    return 1
            
            while(indx<len(points)):
                
                    print(current_point)
                    if points[indx][0]>=current_point[0] and points[indx][0]<=current_point[1]:
                            current_point[1]=min(points[indx][1],current_point[1])
                            current_point[0]=points[indx][0]
                    else:
                            current_point=points[indx]
                            cnt+=1
                            
                    indx+=1
                                
            return cnt    
                
                    
                
        