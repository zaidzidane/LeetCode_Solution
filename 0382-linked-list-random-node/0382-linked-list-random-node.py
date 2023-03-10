# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
import random
class Solution:

    d={}
    def __init__(self, head: Optional[ListNode]):
        self.head=head
        self.cnt=0
        while(head):
                    
                self.d[self.cnt]=head
                head=head.next
                self.cnt+=1
                
                
        

    def getRandom(self) -> int:
        
        val=random.randint(0,self.cnt-1)
        return self.d[val].val
        
        
        
        
        


# Your Solution object will be instantiated and called as such:
# obj = Solution(head)
# param_1 = obj.getRandom()