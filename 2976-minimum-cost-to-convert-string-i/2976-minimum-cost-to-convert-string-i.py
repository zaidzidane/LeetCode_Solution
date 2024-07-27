###Single Source Shortest Path##############
### Simple BFS Algorithm
## We can use BFS,for unweighted graph

### Dijshtra's A:gorithm
### Shortest Paths

# 1. Weighted Graph
# 2. Single Source Shortest Path(SSSP)
# 3. Greedy Algorithm
# 4. Dijkshtra doesnt work for graph with negative edges


###Bellman Ford
# 1. Weighted Graph
# 2. Single Source Shortest Path(SSSP)
# 3. Bellman-Ford works for graph with the negative weights edges.


class Solution:
    
    def __init__(self):
        
            self.distance_node=defaultdict(list)
    
    def __helper(self,graph,start,end):
        
            if start in self.distance_node:
                    return self.distance_node[start][end]
        
            pq=[]
            distance=[float(inf)]*len(graph)
            distance[start]=0
            heapq.heappush(pq,(0,start))
            while(pq):
                current_distance,current_node=heapq.heappop(pq)
                if current_distance>distance[current_node]:
                        continue
                
                for dist,neigh in graph[current_node]:
                        
                    val=current_distance+dist
                    if val<distance[neigh]:
                            distance[neigh]=val
                            heapq.heappush(pq,(val,neigh))
            
            
            self.distance_node[start]=distance
            return distance[end]
                        
            
    
    
    
    def minimumCost(self, source: str, target: str, original: List[str], changed: List[str], cost: List[int]) -> int:
    
            n=len(source)
            graph=[[] for i in range(26)]
            
            
            
            for item0,item1,cost1 in zip(original,changed,cost):
                    
                    graph[ord(item0)-ord('a')].append([cost1,ord(item1)-ord('a')])
                  
            ans=0     
            for item1,item2 in zip(source,target):
                val=self.__helper(graph,ord(item1)-ord('a'),ord(item2)-ord('a'))
                
                if val==float(inf):
                        return -1
                ans+=val
            return ans
                    
            
            
                    
            