class Solution:
    
    
    def find(self,parent,x):
        
            if parent[x]==x:
                    return x
                
            parent[x]=self.find(parent,parent[x])
            return parent[x]
    
    
    
    
    def helper(self,parent,i,j):
        
        parent_i=self.find(parent,i)
        parent_j=self.find(parent,j)
        
        
        parent[parent_j]=parent[parent_i]
        
        
    
    
    
    def earliestAcq(self, logs: List[List[int]], n: int) -> int:
            
            
            sorted_logs=sorted(logs,key=lambda logs:logs[0])
            
            
            parent=[i for i in range(n)]
            visited=set(i for i in range(n))
            
            for items in sorted_logs:
                
                self.helper(parent,items[1],items[2])
                for indx,item in enumerate(parent):
                    parent[indx]=self.find(parent,item)
                # print(parent,set(parent))
                if len(set(parent))==1:
                        return items[0]
                    
            return -1
            
            
            
            
        
            