class Solution:
    
    
    def isIsomorphic(self, s: str, t: str) -> bool:
    
            dict1={}
            dict2={}
            
            for item1,item2 in zip(s,t):
                
                if item1 not in dict1:
                    dict1[item1]=item2
                else:
                    if dict1[item1]!=item2:
                            return False
                        
                if  item2 not in dict2:
                    dict2[item2]=item1
                else:
                    if dict2[item2]!=item1:
                            return False
                        
            
            return True
        