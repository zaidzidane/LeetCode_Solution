class Solution:
    
    def __init__(self):
        
            self.ans=[]
    
    
    
    def helper(self,graph,indx,dest,visited,trav):
        
                
                if visited[indx]==True:
                    return 
        
                if indx==dest:
                        
                        trav.append(indx)
                        self.ans.append(trav[:])
                        trav.pop(-1)
                        return
                
                
                visited[indx]=True
                trav.append(indx)
                for item in graph[indx]:
                    self.helper(graph,item,dest,visited,trav)
                    
        
                visited[indx]=False
                trav.pop(-1)
               
                
                
        
        
        
        
        
        
    
    
        
    
    
    
    
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        
        n=len(graph)
        visited=[False for i in range(len(graph))]
        self.helper(graph,0,n-1,visited,[])
        return self.ans