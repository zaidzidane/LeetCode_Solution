class Solution:
    
    
    def __helper(self,edges,k):
        
            graph=[[] for i in range(k)]
            indegree=[0]*k
            for item in edges:
                    
                    graph[item[1]-1].append(item[0]-1)
                    indegree[item[0]-1]+=1
            
            queue=collections.deque()
            for indx,item in enumerate(indegree):
                if item==0:
                    queue.append(indx)
        
            ans=[]
            while(len(queue)):
                
                temp=queue.popleft()
                ans.append(temp+1)
                for item in graph[temp]:
                    indegree[item]-=1
                    if indegree[item]==0:
                            queue.append(item)
            if len(ans)==0:
                 return []
            
            return ans
        
   
    def buildMatrix(self, k: int, rowConditions: List[List[int]], colConditions: List[List[int]]) -> List[List[int]]:
        
            order_row= self.__helper(rowConditions,k)
            order_col= self.__helper(colConditions,k)
            
            
            print(len(order_row))
            print(len(order_col))
            if not order_row or not order_col or len(order_row)!=len(order_col):
                    return []
                
            
            matrix=[[0]*k for i in range(k)]
            for indx1,item1 in enumerate(order_row):
                flag=False
                for indx2,item2 in enumerate(order_col):
                    if item1==item2:
                            matrix[k-1-indx1][k-1-indx2]=item1
                            # print(k-1-indx1,k-1-indx2)
                            flag=True
                
                if not flag:
                        
                        return []
            
            
            
            return matrix
                            
            
            
            
                    
                    
                    
                    
                    
            
                
            
            
            
        
            
        
        