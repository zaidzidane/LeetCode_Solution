class Solution:
        
        def __init__(self):
                
            self.directions = [[1,0],[0,1],[-1,0],[0,-1]]
    
    
        def helper(self,grid,i,j,pattern):
            
                if i<0 or j<0 or i>=len(grid) or j>=len(grid[0]) or grid[i][j]==0 or grid[i][j]==pattern:
                        return
                    
                if grid[i][j]==1:
                        grid[i][j]=pattern
                        
                
                for dir_x,dir_y in self.directions:
                    
                    x=i+dir_x
                    y=j+dir_y
                    self.helper(grid,x,y,pattern)
                
          
        
        def shortestBridge(self, grid: List[List[int]]) -> int:
        
            pattern=2
            for indx1,row in enumerate(grid):
                for indx2,item in enumerate(row):
                    
                    if item==1:
                        self.helper(grid,indx1,indx2,pattern)
                        pattern+=1
                        
            
            queue=[]
            for indx1,row in enumerate(grid):
                for indx2,item in enumerate(row):
                        if item==2:
                            queue.append([indx1,indx2,0])
             
            
            distance=0
            while(len(queue)):
                
                    i,j,dist=queue.pop(0)
                    
                    for dir_x,dir_y in self.directions:
                    
                        x=i+dir_x
                        y=j+dir_y
                        if x<0 or y<0 or x>=len(grid) or y>=len(grid[0]):
                            continue
                        else:
                            if grid[x][y]==3:
                                    return dist
                            elif grid[x][y]==0:
                                    queue.append([x,y,dist+1])
                                    grid[x][y]=2
                    
                    
            
                        
            return ans                       
                    
            
            
            
                
        
        
        
        
        
        
        