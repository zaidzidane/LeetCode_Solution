class Solution:
    
    def shortestAlternatingPaths(self, n: int, redEdges: List[List[int]], blueEdges: List[List[int]]) -> List[int]:
        
        redGraph=[[] for i in range(n)]
        for i in range(len(redEdges)):
            redGraph[redEdges[i][0]].append(redEdges[i][1])
            
        blueGraph=[[] for j in range(n)]
        for j in range(len(blueEdges)):
            blueGraph[blueEdges[j][0]].append(blueEdges[j][1])
            
        visited=[float(inf)]*n
        queue=[(0,0,0)]
        visited[0]=0
        dicti={}
        while(len(queue)!=0):
                    dist,temp,color=queue[0]
                    queue.pop(0)
                    if color!=1:
                            for item in redGraph[temp]:
                                        if (temp,item,1) not in dicti:
                                                queue.append([dist+1,item,1])
                                                visited[item]=min(dist+1,visited[item])
                                                dicti[(temp,item,1)]=1
                    
                    if color!=-1:
                            for item in blueGraph[temp]:
                                        if (temp,item,-1) not in dicti:
                                                queue.append([dist+1,item,-1])
                                                visited[item]=min(dist+1,visited[item])
                                                dicti[(temp,item,-1)]=1
                                        
                                        
                                 
        for i in range(len(visited)):
                if visited[i]==float(inf):
                        visited[i]=-1
        print(visited)
        return visited            
        
                    
                    
                    
                                    
                                    
                                              
            
        
            
            
            
        
        
        
        
        
            
        
        
        
        
        
        
            
            
        
        
        
        
        
        