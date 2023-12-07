class Solution:
    def largestOddNumber(self, num: str) -> str:
        
        size=len(num)-1
        for i in range(size,-1,-1):
            print(i,ord(num[i]),ord('0'))
            
            if((ord(num[i])-ord('0'))%2):
                    print("yes")
                    return num[:i+1]
                
        return ''
                    
            