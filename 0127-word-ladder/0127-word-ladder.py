class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        
        if endWord not in wordList:
                return 0
        
        wordList=set(wordList)
        queue=[(beginWord,1)]
        seen={beginWord}
        
        while(len(queue)):
            
            temp,dist=queue.pop(0)
            
            for i in range(26):
                for j in range(len(temp)):
                    s=temp[:j]+chr(ord('a')+i)+temp[j+1:]
                    if s not in seen  and s in wordList:
                        
                            if s==endWord:
                                    return dist+1
                            
                            queue.append([s,dist+1])
                            seen.add(s)
            
                            
        return 0