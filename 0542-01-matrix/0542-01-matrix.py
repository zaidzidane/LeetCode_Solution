class Solution:
    
    def __init__(self):
        
        self.directions=[[1,0],[0,1],[-1,0],[0,-1]]
    
    
    
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
    
        m=len(mat)
        n=len(mat[0])
        queue=collections.deque()
        visited=[[float(inf)]*n for i in range(m)] 
        # print(visited)
        
        for indx1,row in enumerate(mat):
            for indx2,item in enumerate(row):
                
                    if item==0:
                            queue.append([indx1,indx2,0])
                            visited[indx1][indx2]=0
                            
        while(len(queue)):
                
                i,j,dist=queue.popleft()
                for dir_x,dir_y in self.directions:
                    x=dir_x+i
                    y=dir_y+j
                    if x<0 or y<0 or x>=len(mat) or y>=len(mat[0]) or mat[x][y]==0:
                            continue
                    if mat[x][y]==1:
                            visited[x][y]=dist+1
                            queue.append([x,y,dist+1])
                            mat[x][y]=0
                
                
                
                    
        return visited            
                
                
                
                
                
                            
                        
        