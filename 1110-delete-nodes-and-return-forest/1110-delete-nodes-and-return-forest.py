# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def __init__(self):
            self.ans=[]
    
    
    def __helper(self,root,parent,to_del,direc):
        
        if root==None:
            return
        
        
        self.__helper(root.left,root,to_del,'left')
        self.__helper(root.right,root,to_del,'right')
        
        if  parent and parent.val in to_del and root.val not in to_del:
            print('yes')
            if direc=='left':
                parent.left=None
            if direc=='right':
                parent.right=None
            self.ans.append(root)
         
        if  root.val  in to_del:
            print('yes')
            if direc=='left':
                parent.left=None
            if direc=='right':
                parent.right=None
            
            
            
        if parent==None and root.val not in to_del:
            self.ans.append(root)
            
            
    
    
    def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        
        to_del=set(to_delete)
        self.__helper(root,None,to_del,'')
        return self.ans