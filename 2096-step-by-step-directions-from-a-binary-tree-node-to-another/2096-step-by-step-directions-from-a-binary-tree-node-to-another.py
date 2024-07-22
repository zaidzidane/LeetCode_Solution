# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    
    def __init__(self):
        self.graph={}
    
    
    def __helper(self,root,parent):
        
        if root==None:
                return 
        
        self.graph[root.val]=[]
        if parent!=None:
                
                self.graph[root.val].append([parent.val,'U'])
    
        if root.left:
                self.graph[root.val].append([root.left.val,'L'])
                self.__helper(root.left,root)
        
        if root.right:
                self.graph[root.val].append([root.right.val,'R'])
                self.__helper(root.right,root)

        
        
    def getDirections(self, root: Optional[TreeNode], startValue: int, destValue: int) -> str:
        
        
        queue=collections.deque([(startValue,'')])
        self.__helper(root,None)
        visited=[False]*(1+max(self.graph.keys()))
        visited[startValue]=True
        while(len(queue)):
            
            temp,path=queue.popleft()
            
            if temp==destValue:
                return path
            for item,direc in self.graph[temp]:
                if not visited[item]:
                    queue.append((item,path+direc))
                    visited[item]=True
        
        return ''
        
            
            
            
            
        