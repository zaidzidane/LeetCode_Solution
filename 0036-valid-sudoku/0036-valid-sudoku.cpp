class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
            for(int i=0;i<board.size();i++){
                set<int>s;
                for(int j=0;j<board[0].size();j++){
                            if(board[i][j]=='.') continue;
                            if(s.find(board[i][j])!=s.end()){
                                
                                    return false;
                            }  
                            else{
                                    s.insert(board[i][j]);
                            }  
                }
            }
        
            
            for(int i=0;i<board[0].size();i++){
                set<int>s;
                for(int j=0;j<board.size();j++){
                            if(board[j][i]=='.') continue;
                            if(s.find(board[j][i])!=s.end()){
                                    return false;
                            }  
                            else{
                                    s.insert(board[j][i]);
                            }  
                }
            }
        
            for(int k=0;k<=2;k++){
                for(int l=0;l<=2;l++){
                        set<int>s;
                        for(int i=k*3;i<3+k*3;i++){
                            for(int j=l*3;j<3+l*3;j++){
                                if(board[i][j]=='.') continue;
                                if(s.find(board[i][j])!=s.end()){
                                        return false;
                                }  
                                else{
                                        s.insert(board[i][j]);
                                }
                                
                            }
                            
                        } 
                     
                } 
            }
        
            return true;
        
            
        
            
        
        
        
        
    }
};