class Solution:
    
    
    def eventualSafeNodes(self, graph: List[List[int]]) -> List[int]:
        
        
            pattern=[[] for i in range(len(graph))]
            outdegree=[0 for i in range(len(graph))]
          
            for i in range(len(graph)):
                for j in range(len(graph[i])):
                        
                        pattern[graph[i][j]].append(i)
                        outdegree[i]+=1
                    
            print(pattern)
            queue=[]
            for indx,item in enumerate(outdegree):
                
                if item==0:
                    queue.append(indx)
                            
            ans=[]
            while(len(queue)):
                    
                    temp=queue.pop(0)
                    ans.append(temp)
                    for item in pattern[temp]:
                            outdegree[item]-=1
                            if outdegree[item]==0:
                                    print(item)
                                    queue.append(item)
                    
                        
                    
          
            return sorted(ans)
                        
                            
                        
                        