class Solution:
    
    
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        
        
        visited=[False]*len(rooms)
        def dfs(idx,rooms,visited):
            
            visited[idx]=True
            if len(rooms[idx])==0:
                      return        
            
            for item in rooms[idx]:
                if visited[item]==False:
                    visited[item]=True
                    dfs(item,rooms,visited)
                
                
        dfs(0,rooms,visited)
                    
           
        print(visited)
        return all(visited)            
        
                    
            
        
            
        