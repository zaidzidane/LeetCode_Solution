class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        
        
            n=len(num)
            val=0
            for i in num:
                
                val=val*10+i
                
            val+=k
            print(val)
            ans=[]
            while(val!=0):
                    a=int(val%10)
                    ans.append(a)
                    val//=10
                    
                    
            ans.reverse()
            return ans