class Solution:
    def isPathCrossing(self, path: str) -> bool:
        
            direction={'N':[0,1],'S':[0,-1],'E':[1,0],'W':[-1,0]}
            
            store={}
            x=0
            y=0
            store[(x,y)]=1
            for item in path:
               
                m=x+direction[item][0]
                n=y+direction[item][1]
        
                if (m,n) in store:
                        return True
                else:
                        store[(m,n)]=1
            
                x=m
                y=n
            return False
                