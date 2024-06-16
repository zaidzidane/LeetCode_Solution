class AuthenticationManager:
    
    
    def __init__(self, timeToLive: int):
        
        self.time_to_live=timeToLive
        self.dicti={}
        
    def generate(self, tokenId: str, currentTime: int) -> None:
            
        if tokenId not in self.dicti:
                    self.dicti[tokenId]=0
                
        self.dicti[tokenId]=currentTime + self.time_to_live
        
        
    def renew(self, tokenId: str, currentTime: int) -> None:
        
        if tokenId not in self.dicti:
                return 
            
        if self.dicti[tokenId]<=currentTime:
                return
            
        self.dicti[tokenId]= currentTime +self.time_to_live

        
        
    def countUnexpiredTokens(self, currentTime: int) -> int:
        
        cnt=0
        
        for key,value in self.dicti.items():
                if value>currentTime:
                        cnt+=1
        
        return cnt
        

# Your AuthenticationManager object will be instantiated and called as such:
# obj = AuthenticationManager(timeToLive)
# obj.generate(tokenId,currentTime)
# obj.renew(tokenId,currentTime)
# param_3 = obj.countUnexpiredTokens(currentTime)