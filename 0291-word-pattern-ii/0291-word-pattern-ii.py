class Solution:
    
    def wordPatternMatch(self, pattern: str, s: str) -> bool:
        
        symbol_map = {}
        word_set=set()
        def is_match(p_index,s_index):
                
            if p_index==len(pattern):
                return s_index ==len(s)
            
            
            symbol=pattern[p_index]
            if symbol in symbol_map:
                    
                    word=symbol_map[symbol]
                    if s[s_index:s_index+len(word)]!=word:
                            return False
                    
                    return is_match(p_index+1,s_index+len(word))
        
        
            for k in range(s_index+1,len(s)+1):
                new_word=s[s_index:k]
                if new_word in word_set:
                        continue
                        
                symbol_map[symbol]=new_word
                word_set.add(new_word)
                if is_match(p_index+1,s_index+len(new_word)):
                    return True
                del symbol_map[symbol]
                word_set.remove(new_word)
                
        
        
        return is_match(0, 0)
            