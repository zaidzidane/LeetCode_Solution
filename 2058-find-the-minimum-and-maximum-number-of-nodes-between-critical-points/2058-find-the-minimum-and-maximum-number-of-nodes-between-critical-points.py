# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        
        cnt=1
        val1=head.val
        val2=head.next.val
        temp=head.next.next
        ans1=[]
        while temp:
            val3 = temp.val
            if (val2 > val1 and val2 > val3) or (val2 < val1 and val2 < val3):
                ans1.append(cnt)
                
            val1 = val2
            val2 = val3
            temp = temp.next
            cnt += 1
        
        print(ans1)
        if len(ans1)<=1:
                return [-1,-1]    
        i=1
        minim=float(inf)
        while(i<len(ans1)):
            
            minim=min(minim,ans1[i]-ans1[i-1])
            i+=1
        
        
        return [minim,ans1[-1]-ans1[0]]    
        
            
            
            
        