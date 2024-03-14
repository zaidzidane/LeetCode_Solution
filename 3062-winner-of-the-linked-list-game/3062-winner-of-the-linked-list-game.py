# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def gameResult(self, head: Optional[ListNode]) -> str:
        
            cnt=0
            while(head and head.next):
                
                    if head.val<head.next.val:
                            cnt-=1
                    
                    elif head.val>head.next.val:
                            cnt+=1
                    
                    head=head.next.next
                    
                    
            if cnt==0:
                    return 'Tie'
            elif cnt>0:
                    return 'Even'
            else:
                    return 'Odd'
                            
                
                
        
        