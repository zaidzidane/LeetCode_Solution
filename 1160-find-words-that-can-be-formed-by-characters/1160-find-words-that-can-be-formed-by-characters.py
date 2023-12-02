class Solution:
    
    def countCharacters(self, words: List[str], chars: str) -> int:

        dicti={}
        for c in chars:
            if c not in dicti: 
                    dicti[c]=0
            dicti[c]+=1


        cnt=0
        for word in words:
            allitems={}
            flag=True
            for w in word:
                if w not in allitems:
                    allitems[w]=0

                allitems[w]+=1

            for key,value in allitems.items():
                if (key not in dicti) or (dicti[key]<allitems[key]):
            
                        flag=False


            if flag:
                cnt+=len(word)


        return cnt    
        
        
        
        
        
        
        
        
            
        
        
        
        
        