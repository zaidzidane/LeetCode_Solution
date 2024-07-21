class Solution:
    
    def __init__(self):
        
        self.direction=[[0,1],[1,0],[-1,0],[0,-1],[1,1],[1,-1],[-1,-1],[-1,1]]
        
        
    
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        
        
            m=len(grid)-1
            n=len(grid[0])-1
            
            if grid[m][n]==1 or grid[0][0]==1:
                    return -1
                
                
            queue=collections.deque([(0,0,1)])
            while(len(queue)):
                
                i,j,dist=queue.popleft()
                
                if i==m and j==n:
                        return dist
                for dir_x,dir_y in self.direction:
                    
                    x=i+dir_x
                    y=j+dir_y
                   
                    if x<0 or y<0  or x>=len(grid) or y>=len(grid[0]) or grid[x][y]==1:
                                 continue
                    else:
                            queue.append([x,y,dist+1])
                            grid[x][y]=1
            
            
            return  -1