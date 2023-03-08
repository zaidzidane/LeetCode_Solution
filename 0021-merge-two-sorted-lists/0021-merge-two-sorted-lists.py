# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
            if not list1 and not list2: return None
        
            if not list1: return list2
            if not list2: return list1
            temp1=list1
            temp2=list2
            ans=ListNode()
            temp=ListNode()
            ans.next=temp
            while(temp1 and temp2):
                   
                    if(temp1.val>temp2.val):
                            
                            temp.next=ListNode(temp2.val)
                            temp2=temp2.next
                        
                    else:
                            temp.next=ListNode(temp1.val)
                            temp1=temp1.next
                    
                 
                    temp=temp.next
                            
                            
            while(temp1):
                
                temp.next=temp1
                temp1=temp1.next
                temp=temp.next
                
                
            while(temp2):
                    temp.next=temp2
                    temp2=temp2.next
                    temp=temp.next
                    
            
            print(ans)
            return ans.next.next
                