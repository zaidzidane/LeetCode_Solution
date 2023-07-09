class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        items=[]
        if(x<0): return False
        while x:
            items.append(x%10)
            x=x//10
            
            
        
        print(items)
        
        for i in range(len(items)):
            if(items[i]!=items[len(items)-i-1]):
                        return False
                
        return True
                    
            
        
        