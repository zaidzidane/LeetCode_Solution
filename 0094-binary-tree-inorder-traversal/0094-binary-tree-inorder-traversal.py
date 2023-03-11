# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

    
def dfs(root,ans):
           
            if root==None:
                    return 
                  
            dfs(root.left,ans)    
            ans.append(root.val)
            dfs(root.right,ans)
            
                
                
class Solution:

    
    
    
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        
        ans=[]
        dfs(root,ans)
        return ans