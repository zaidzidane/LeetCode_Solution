# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    
    def __init__(self):
        
        self.graph={}
    
    
    def helper(self,root,parent):
        
        if root==None:
                return None
        
        self.graph[root.val]=[]
        if parent!=None:
                self.graph[root.val].append(parent.val)
        
        if root.left!=None:
                self.graph[root.val].append(root.left.val)
                self.helper(root.left,root)
                
        
        if root.right!=None:
                self.graph[root.val].append(root.right.val)
                self.helper(root.right,root)
                
    
    
    
    def distanceK(self, root: TreeNode, target: TreeNode, k: int) -> List[int]:
    
            
            self.helper(root,None)
            queue=collections.deque([(target.val,0)])
            visited=[False]*(max(self.graph.keys())+1)
            #print(visited,max(self.graph.keys())+1)
            visited[target.val]=True
            
            ans=[]
            while(len(queue)):
                temp,dist = queue.popleft()
                if dist==k:
                        ans.append(temp)
                visited[temp]=True
                for item in self.graph[temp]:
                    if not visited[item]:
                            visited[item]=True
                            queue.append((item,dist+1))
            
                    
            return ans        
                    
                

                
### Time Complexity  
### Space Complexity