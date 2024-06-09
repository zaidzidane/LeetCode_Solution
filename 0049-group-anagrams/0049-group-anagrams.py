class Solution:
    
    
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
    
        
            dicti={}
            for item in strs:
                
                word_dic=[0]*27
                for i in item:
                
                    word_dic[ord(i)-97]+=1
                
                if tuple(word_dic) not in dicti:
                    dicti[tuple(word_dic)]=[]
                
                dicti[tuple(word_dic)].append(item)
                
                
            
            ans=[]
            for key,value in dicti.items():
                
                ans.append(value)
                
                
            return ans        
                    
                    