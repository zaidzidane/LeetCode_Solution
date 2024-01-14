class Solution:
    
    def closeStrings(self, word1: str, word2: str) -> bool:

            if len(word1)!=len(word2):
                    return False
            
            dict1=Counter(word1)
            dict2=Counter(word2)
            # print(dict1.values(),dict2.values())
        
            return set(word1)==set(word2)  and sorted(list(dict1.values()))==sorted(list(dict2.values()))
        
        
    
            
            


        
            