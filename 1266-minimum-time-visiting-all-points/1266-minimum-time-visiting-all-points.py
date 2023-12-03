class Solution:
    
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        
        
            # queue=[]
            # queue.append(points[0])
            # distance=0
            # directions=[[1,0],[0,1],[1,1]]
            # for i in range(1,len(points)):
            #     while(len(queue)):
            #             temp=queue[0]
            #             queue.pop(0)
            #             if temp[0]==points[]
            distance=0
            for i in range(1,len(points)):
                
                distance+=max(abs(points[i][1]-points[i-1][1]),abs(points[i][0]-points[i-1][0]))
                
            return distance
            
                
                




