class Solution:
    
                    

    
    def exist(self, board: List[List[str]], word: str) -> bool:
            
            
                directions=[[1,0],[0,1],[-1,0],[0,-1]]
                def helper(board,i,j,word,indx):

                        if indx==len(word):
                                return True

                        if i<0 or i>=len(board) or j<0 or j>=len(board[0]) or board[i][j]!=word[indx]:
                                return False

                        char=board[i][j]
                        board[i][j]='*'
                        val=False
                        for k in directions:
                                x=i+k[0]
                                y=j+k[1]
                                val|=helper(board,x,y,word,indx+1)

                        board[i][j]=char
                        return val
                
                
                for i in range(len(board)):
                    for j in range(len(board[i])):
                            
                            if board[i][j]==word[0]:
                                    if helper(board,i,j,word,0):
                                            return True
                
                return False
                                        
                                        
                                            
                                            
                                    
                    
                