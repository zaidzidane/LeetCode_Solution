class Solution {
public:
    
    
   bool dfs(vector<vector<char>>&board,int i,int j,string word,int index){
       
            
            
            char c;
            if(index>=word.length()){
                
                        return true;
                
            }
       
            if(i<0 or i>=board.size() or j<0 or j>=board[0].size() or board[i][j]!=word[index])
        
                        return false;
       
           
            if(board[i][j]==word[index]){
                        c=board[i][j];
                        board[i][j]='*';    
                        bool val= dfs(board,i+1,j,word,index+1)| dfs(board,i-1,j,word,index+1)| dfs(board,i,j+1,word,index+1)| dfs(board,i,j-1,word,index+1);
                        board[i][j]=c;
                        return val;
                
            }
            
          
            return false;
   } 
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
                
                for(int i=0;i<board.size();i++){ 
                    for(int j=0;j<board[0].size();j++){
                        
                        
                                if(board[i][j]==word[0]){
                                    
                                    
                                       if(dfs(board,i,j,word,0)) return true;
                                    
                                    
                                }

                    }
                    
                    
                }
        
                return false;
        
        
    }
};