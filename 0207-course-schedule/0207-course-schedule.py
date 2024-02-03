class Solution:
    
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
    
        queue=[]
        graph=[[] for i in range(numCourses)]
        indegree=[0]*numCourses
        
        for item in prerequisites:
            graph[item[1]].append(item[0])    
            indegree[item[0]]+=1   
        
        
        for i,item in enumerate(indegree):
            if item==0:
                    queue.append(i)
        
        
        while(len(queue)!=0):
            
            temp=queue.pop(0)
            print(temp)
            for item in graph[temp]:
                
                indegree[item]-=1
                if indegree[item]==0:
                        queue.append(item)
                
        
        
        print(indegree)
        return not any(indegree)
            
        
        
        