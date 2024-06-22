class Solution:
    
    def find(self,parent,i):
        
        if parent[i]==i:
            return i
        
        parent[i]=self.find(parent,parent[i])
        return parent[i]
    
    def unionset(self,rank,parent,i,j):
        
        parent_i=self.find(parent,i)
        parent_j=self.find(parent,j)
        if parent_i>parent_j:   
                rank[parent_i]+= rank[parent_j]
                parent[parent_j]=parent[parent_i]
        
        else:
                rank[parent_j]+= rank[parent_i]
                parent[parent_j]=parent[parent_i]
        
        
        
    
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
    
        
        rank=[-1 for i in range(len(isConnected))]
        parent=[i for i in range(len(isConnected))]
                            
                            
        for i in range(len(isConnected)):
            for j in range(len(isConnected[i])):
                    
                    if isConnected[i][j]==1 and i!=j:
                            self.unionset(rank,parent,i,j)
                            print(i,j)
        
           
    
        visited=[]
        for i in range(len(parent)):
                parent[i]=self.find(parent,i)
                
        return len(set(parent))
        
        
            
        
            