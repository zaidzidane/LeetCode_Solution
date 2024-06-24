class Solution:
    
    def __init__(self):
        
        
        self.directions=[[1,0],[0,1],[0,-1],[-1,0]]
     
    
    
    def helper(self,grid,i,j):
        
        
        if i<0 or j<0 or i>=len(grid) or j>=len(grid[0])or grid[i][j]==0:
                return
    

        grid[i][j]=0
        
        for item in self.directions:
            
            x=item[0]+i
            y=item[1]+j        
            self.helper(grid,x,y)
    
    
    def numEnclaves(self, grid: List[List[int]]) -> int:
    
    
            for i in range(len(grid)):
                
                if grid[i][0]==1:
                        self.helper(grid,i,0)
                
                if grid[i][len(grid[0])-1]==1:
                        self.helper(grid,i,len(grid[0])-1)
                        
                        
            for j in range(len(grid[0])):
                    
                    if grid[0][j]==1:
                        self.helper(grid,0,j)
                        
                    if grid[len(grid)-1][j]==1:
                        self.helper(grid,len(grid)-1,j)
                        
                        
            cnt=0
            for row in grid:
                for item in row:
                    if item==1:
                            cnt+=1
                
                
            return cnt    
        
        