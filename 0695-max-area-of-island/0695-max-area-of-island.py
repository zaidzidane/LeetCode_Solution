class Solution:
    
    
    def __init__(self):
        
        self.directions=[[1,0],[0,1],[-1,0],[0,-1]]
    
    
    def helper(self,grid,i,j):
        
        if i<0 or i>=len(grid) or j<0 or j>=len(grid[0]) or grid[i][j]==0:
                return 0
            
        grid[i][j]=0
        cnt=1
        for item in self.directions:
                x=item[0]+i
                y=item[1]+j
                cnt+=self.helper(grid,x,y)
         
        return cnt
    
    
    
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
    
    
        max_cnt=0
        for i,row in enumerate(grid):
            for j,item in enumerate(row):
                
                if item==1:
                    
                    val=self.helper(grid,i,j)
                    max_cnt=max(max_cnt,val)    
        
                
        return max_cnt
        
        