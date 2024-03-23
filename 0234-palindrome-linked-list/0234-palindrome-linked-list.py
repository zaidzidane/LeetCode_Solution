# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        
        
            num_str=''
            
            while(head):
                
                    num_str+=str(head.val)
                    head=head.next
                    
            
            
            i=0
            while(i<len(num_str)//2):
                
                    if num_str[i]!=num_str[len(num_str)-i-1]:
                                return False
                        
                    i+=1
                        
            return True
                            