# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    ans=0
    def dfs(self,root,total):
        
        if not root:
                
                return
        
        if not root.left and not root.right:
                total=total*10+root.val
                self.ans +=total
                return
            
        total=total*10+root.val
        self.dfs(root.left,total)
        self.dfs(root.right,total)
            
        
    
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        
            total=0
            self.dfs(root,total)
            return self.ans
        