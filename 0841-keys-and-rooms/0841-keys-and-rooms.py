class Solution:
    
    
    def __init__(self):
        
        self.visited=[]
    
    
    
    def helper(self,rooms,indx):
        
        if self.visited[indx]==True:
                return
            
        self.visited[indx]=True
        
        for item in rooms[indx]:
            
            self.helper(rooms,item)
        
        
    
    
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
    
            
            self.visited=[False for i in range(len(rooms))]
            
            
            self.helper(rooms,0)
            return all(self.visited)
        
        