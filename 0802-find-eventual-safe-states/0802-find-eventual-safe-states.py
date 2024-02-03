class Solution:
    
    
    def eventualSafeNodes(self, graph: List[List[int]]) -> List[int]:
        
            m=len(graph)
            gh=[[] for i in range(m)]
            indegree=[0]*len(graph)
            for i,items in enumerate(graph):
                for j,item in enumerate(items):
                    gh[item].append(i)
                    indegree[i]+=1
                    
            
            
            queue=[]
            for i,item in enumerate(indegree):
                    if item==0:
                            queue.append(i)
                            
                            
            print(gh)
            
            while(len(queue)!=0):
                    temp=queue.pop(0)
                    for item in gh[temp]:
                            indegree[item]-=1
                            if indegree[item]==0:
                                    queue.append(item)
                                    
        
        
        
            ans=[]
            for i,item in enumerate(indegree):   
                if item==0:
                        ans.append(i)
                        
            return ans
        
        
                    
                            
            
                        
            
                        
                        