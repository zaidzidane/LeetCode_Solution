class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        
        t=s+s
        
        if len(s)!=len(goal):
                return False
            

        
        if goal in t[:-1]:
                return True
        
        return False
    