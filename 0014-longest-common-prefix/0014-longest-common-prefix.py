
import sys
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
            if len(strs)==0:
                    return ""
                
                
            cmn_prfx=2**31-1
            
            
            for i in range(len(strs)-1):
                cmn=0
                for j in range(len(min(strs[i],strs[i+1]))):
                        if(strs[i][j]!=strs[i+1][j]):
                                break
                                
                        else:
                                cmn+=1
                                
                                
                                
                cmn_prfx=min(cmn_prfx,cmn)
                                        
                            
            return strs[0][0:cmn_prfx]
                    
        