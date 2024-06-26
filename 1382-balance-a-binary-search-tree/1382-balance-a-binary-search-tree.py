# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

        
    
    
    


class Solution:
    
    def __init__(self):
        
        self.arr=[]
    
    
    def helper(self,root):
    
        if root==None:  
                return None
            
        self.helper(root.left)
        self.arr.append(root.val)
        self.helper(root.right)
        
      
    def distribute(self,start,end):
        
        
                if start>=end:
                    return None
                
                mid=start+(end-start)//2
                
                root=TreeNode(self.arr[mid])
                
                root.left=self.distribute(start,mid)
                root.right=self.distribute(mid+1,end)
                
                return root
             
        
        
    def balanceBST(self, root: TreeNode) -> TreeNode:
        
        
        self.helper(root)
        return self.distribute(0,len(self.arr))
        
        