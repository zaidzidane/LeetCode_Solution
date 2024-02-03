class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        
        
        
            def dfs(isConnected,i,visited):
                
                for j,node in enumerate(isConnected[i]):
                    if node==1 and visited[j]==False and i!=j:
                            visited[j]=True
                            dfs(isConnected,j,visited)
                            
               
            
            visited=[False]*len(isConnected)
            cnt=0
            for i in range(len(isConnected)):
                
                    if not visited[i]:
                            visited[i]=True
                            dfs(isConnected,i,visited)
                            cnt+=1
                            
            
            return cnt    
            
        
            
        