class Solution:
    
    
    def wordPattern(self, pattern: str, s: str) -> bool:
    
                
            anim_list=s.split(' ')
            dict1={}
            dict2={}
            
            if len(anim_list)!=len(pattern):
                    return False
            
            for item1,item2 in zip(pattern,anim_list):
            
                    if item1 not in dict1:
                            dict1[item1]=item2
                    else:
                            if dict1[item1]!=item2:
                                    return False
                                
                    if item2 not in dict2:
                            dict2[item2]=item1
                    else:
                            if dict2[item2]!=item1:
                                    return False
                                
                            
            return True