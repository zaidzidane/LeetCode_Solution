# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
#from collections import OrderedDict
class Solution:
    
    def frequenciesOfElements(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
              dicti=OrderedDict()
              while(head!=None):
                        
                        if head.val not in dicti:
                                dicti[head.val]=0
                        
                        dicti[head.val]+=1
                        head=head.next
                        
              ans=ListNode()
              temp=ans
              for item in dicti.values():
                    temp.next=ListNode(item)
                    temp=temp.next
                    
              return ans.next
                    
                
                
            
        