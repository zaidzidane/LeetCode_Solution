class Solution:
    
    def __init__(self):
        
        self.directions=[[1,0],[-1,0],[0,1],[0,-1]]
    
    
    def helper(self,grid,i,j):
        
        if i>=len(grid) or i<0 or j>=len(grid[0]) or j<0 or grid[i][j]=='0':
                    return
            
            
        grid[i][j]='0'
        for direction in self.directions:
                x=direction[0]+i
                y=direction[1]+j
                
                self.helper(grid,x,y)
                
            
                 
    
    
    def numIslands(self, grid: List[List[str]]) -> int:
         
            
        cnt=0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                
                
                if grid[i][j]=='1':
                    
                    self.helper(grid,i,j)
                    
                    cnt+=1
                    
        
        
        return cnt