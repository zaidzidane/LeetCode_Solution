# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
   
    def pseudoPalindromicPaths (self, root: Optional[TreeNode]) -> int:
        
        
                arr=[0]*9
                print(arr)
                cnt=0
                def palindrome(root,arr):
                    
                    nonlocal cnt
                    if root.left==None and root.right==None:
                            arr[root.val-1]+=1
                            charCnt=sum(arr)
                            if charCnt%2==0:
                                    for i in range(9):
                                            if arr[i]%2!=0:
                                                    return
                                    cnt+=1
                            else:
                                    onlyOne=False
                                    for i in range(9):
                                            if arr[i]%2!=0 and onlyOne==True:
                                                    return
                                            elif arr[i]%2!=0 and onlyOne==False:
                                                    onlyOne=True
                                            
                                    cnt+=1
                            return
                
                    arr[root.val-1]+=1
                    if root.left:
                        palindrome(root.left,arr.copy())
                    if root.right:
                        palindrome(root.right,arr.copy())
                    
              
                palindrome(root,arr)
                return cnt        
                