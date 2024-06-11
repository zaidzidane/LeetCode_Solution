# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    
    def __init__(self):
            self.maxim=float(-inf)
    
    def dfs(self,root):
        
            
            if root==None:
                return 0
        
            val1=self.dfs(root.left)
            val2=self.dfs(root.right)
            ans=val1+val2+root.val
            self.maxim=max(self.maxim,ans)
            val=max(val1,val2)+root.val
            return 0 if val<0 else val
     
    
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        
            self.dfs(root)
            return self.maxim
        