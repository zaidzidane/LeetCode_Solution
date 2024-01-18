class Solution:
    
    def calculateTime(self, keyboard: str, word: str) -> int:
    
        cnt=keyboard.index(word[0])
        for i in range(1,len(word)):
             cnt+=abs(keyboard.index(word[i])-keyboard.index(word[i-1]))
                
        return cnt
        
        