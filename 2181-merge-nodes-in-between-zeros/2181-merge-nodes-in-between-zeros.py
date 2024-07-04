# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        
        val=0
        ans=ListNode()
        temp=ans
        head=head.next
        while(head):
        
            if head.val!=0:
                    val+=head.val
            else:
                    temp.next=ListNode(val)
                    temp=temp.next
                    val=0
            
            head=head.next
                    
        return ans.next