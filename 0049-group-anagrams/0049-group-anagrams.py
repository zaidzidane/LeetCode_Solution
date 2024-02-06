class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        dicti={}
        for word in strs:
            
            w=''.join(sorted(word))
            if w not in dicti:
                dicti[w]=[]
            
            dicti[w].append(word)
        
        return dicti.values()
            
            
            
        