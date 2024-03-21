# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeInBetween(self, list1: ListNode, a: int, b: int, list2: ListNode) -> ListNode:
        
            temp=list1
            temp1=None
            temp2=None
            cnt=0
            while(cnt<=b):
                
                if cnt==a-1:
                        temp1=temp
                temp=temp.next
                cnt+=1
            
            
            temp2=temp
            
            
            temp1.next=list2
            temp=list2
            while(temp.next):
                temp=temp.next
            
            temp.next=temp2
            
            return list1
                
            
                                
            