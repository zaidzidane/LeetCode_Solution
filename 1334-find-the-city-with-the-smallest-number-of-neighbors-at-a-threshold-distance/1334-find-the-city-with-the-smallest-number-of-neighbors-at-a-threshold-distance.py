###Floyd Warshall Algorithm
# 1. All pair shortest path
# 2. Shprtest between all pair of vertices
# 3. work with negative edges
# 4. Can detect negative cycles too,with one extra step
# DP Based O(n^3) times

class Solution:
    
    def __helper(self,graph):
        
        dist=graph
        for k in range(len(graph)):
            for i in range(len(graph)):
                for j in range(len(graph)):
                        
                        if dist[i][j]>dist[i][k]+dist[k][j]:
                                dist[i][j]= dist[i][k]+dist[k][j]
        
        return dist
    
    def findTheCity(self, n: int, edges: List[List[int]], distanceThreshold: int) -> int:
    
        graph=[[float(inf)]*n for item in range(n)]
        for i in range(len(graph)):
            graph[i][i]=0
        print(graph)
        for item in edges:
            graph[item[0]][item[1]]=item[2]
            graph[item[1]][item[0]]=item[2]
        
        
        dist=self.__helper(graph)
        print(dist)
        cnt=[]
        for items in dist:
            val=0
            for item in items:
                if item<=distanceThreshold:
                        val+=1
            cnt.append(val)
        
        print(cnt)
        min_val=min(cnt)
        ans=0
        for indx,item in enumerate(cnt):
            if item==min_val:
                    ans=indx
        
        return ans
        
        
        
        
        
        
        