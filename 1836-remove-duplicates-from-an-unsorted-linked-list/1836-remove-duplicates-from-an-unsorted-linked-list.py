# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    
    
    def deleteDuplicatesUnsorted(self, head: ListNode) -> ListNode:
        
        dup_dict={}
        temp=head
        while(temp):
            
            if temp.val in dup_dict:
                dup_dict[temp.val]=1
            else:
                dup_dict[temp.val]=0
            
            temp=temp.next
        
        # print(dup_dict)
        ans=ListNode()
        temp2=ans
        temp=head
        while(temp):
            
            if dup_dict[temp.val]==0:
                    temp2.next=ListNode(temp.val)
                    temp2=temp2.next
            
            temp=temp.next
        
        return ans.next
            
            
        