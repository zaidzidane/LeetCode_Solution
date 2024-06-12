class TrieNode:
    
    def __init__(self):
        self.child=[None]*26
        self.flag=False



class WordDictionary:

    def __init__(self):
        
        self.root=TrieNode()
        

    def addWord(self, word: str) -> None:
        
        temp=self.root
        for char in word:
            val=ord(char)-97
            if temp.child[val]==None:
                temp.child[val]=TrieNode()
            temp=temp.child[val]
            
    
        temp.flag=True
        
    def dfs(self,temp,word,indx):
        
        if temp==None:
                return False
        
        if indx==len(word):
            print(temp.flag)
            return temp.flag
        
        val=False
        if word[indx]=='.':
                for item in temp.child:
                        if temp!=None:
                                val |=self.dfs(item,word,indx+1)
        else:
                print(word[indx])
                if temp.child[ord(word[indx])-97]==None:
                        return False
                    
                temp=temp.child[ord(word[indx])-97]
                val|=self.dfs(temp,word,indx+1)    
                
                
                
        return val
    
    def search(self, word: str) -> bool:
        
        temp=self.root
        return self.dfs(temp,word,0)
        


# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)