class Solution:
    def removeVowels(self, s: str) -> str:
        
        vowels=('a','e','i','o','u')
        
        ans=''
        
        for char in s:
            
            if char not in vowels:
                    ans+=char
                    
        return ans
    
            
        