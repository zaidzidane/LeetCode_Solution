# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        
            ans=[]
            for item in lists:
                    temp=item
                    while(temp):
                            ans.append(temp.val)
                            temp=temp.next

            if not len(ans): return None
            ans.sort()
            print(ans)       
            temp=ListNode()
            a=temp
            for item in ans:
                    
                    temp.next=ListNode(item)
                    temp=temp.next
                    
                    
            return a.next
                            
                        
                        
                    
        