class Solution:
    
    
    def minimumCost(self, n: int, connections: List[List[int]]) -> int:
        
            a=[]
            heapq.heappush(a,[0,0])
            ans=0
            vis=[False]*n
            
            graph=[[] for i in range(n)]
            for item in connections:
                graph[item[0]-1].append([item[2],item[1]-1])
                graph[item[1]-1].append([item[2],item[0]-1])
                
                
            cost=0
            while(len(a)!=0):
                
                temp=heapq.heappop(a)
                if vis[temp[1]]:
                        continue
                cost+=temp[0]
                vis[temp[1]]=True
                for item in graph[temp[1]]:
                    if vis[item[1]]:
                            continue
                    heapq.heappush(a,item)
            
            
            print(vis)
            return -1 if all(vis)==False else cost
                
                
                
                
                
                
                
                
                
                    