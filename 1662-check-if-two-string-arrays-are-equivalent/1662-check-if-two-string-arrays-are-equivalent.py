class Solution:
    
    
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        
        a=''
        b=''
        for item in word1:
            a+=item
            
        for item in word2:
            b+=item
            
        
        return a==b
        
        
        
        
        
        
        
        
        
        
        