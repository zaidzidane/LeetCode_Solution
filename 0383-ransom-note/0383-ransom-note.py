class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        
        a=[0]*27
        
        for char in magazine:
                a[ord(char)-97]+=1
                
                
        for char in ransomNote:
                
                if a[ord(char)-97]<=0:
                    return False
                
                a[ord(char)-97]-=1
                
                
        return True
            