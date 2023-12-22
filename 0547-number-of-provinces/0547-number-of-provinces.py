class Solution:
    
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        
        numNodes=len(isConnected)
        rank=[1]*numNodes
        parent=[x for x in range(numNodes)]
        
        def find(x,parent)->int:
            
            while(x==parent[x]):
                    return x
                
            parent[x]=find(parent[x],parent)
            return parent[x]
        
        
        def union(x,y,parent,rank):
            parent_x=find(x,parent)
            parent_y=find(y,parent)
            if rank[parent_x]>rank[parent_y]:
                    parent[parent_y]=parent_x
                    rank[parent_x]+=rank[parent_y]
                    
            else:
                    parent[parent_x]=parent_y
                    rank[parent_y]+=rank[parent_x]
                    
        
        for i in range(len(isConnected)):
            for j in range(len(isConnected[i])):
                    if isConnected[i][j]==1 and i<j:
                        union(i,j,parent,rank) 
                        
                

        s=set()
        for p in parent:
            s.add(find(p,parent))
                

        return len(s)
                    
            
                