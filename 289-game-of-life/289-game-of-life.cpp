class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
     
        
            vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
            vector<vector<int>>ans(board.size(),vector<int>(board[0].size()));
            for(int i=0;i<board.size();i++){
                    for(int j=0;j<board[0].size();j++){
                           
                            if(board[i][j]==1){
                                
                                        int nbrs=0;
                                        for(int k=0;k<directions.size();k++){
                                            
                                                int x=i+directions[k][0];
                                                int y=j+directions[k][1];
                                    if(x>=0 and y>=0 and x<board.size() and y<board[0].size() and board[x][y]==1) 
                                                nbrs++;
                                            
                                        }
                                
                                        
                                        if(nbrs<2){
                                                ans[i][j]=0;
                                        }
                                        if(nbrs==2 or nbrs==3){
                                                ans[i][j]=1;
                                        }
                                        if(nbrs>3){
                                                ans[i][j]=0;
                                        }
                                
                            }
                
                            else{
                                
                                        int nbrs=0;
                                        for(int k=0;k<directions.size();k++){
                                            
                                                int x=i+directions[k][0];
                                                int y=j+directions[k][1];
                                               
                                                
                                    if(x>=0 and y>=0 and x<board.size() and y<board[0].size() and board[x][y]==1) 
                                                nbrs++;
                                            
                                        }
                                
                                        if(nbrs==3){
                                                ans[i][j]=1;
                                        }
                                        else{
                                            
                                                ans[i][j]=0;
                                        }
                                 
                            }
                
                
            }
            }
        
            board=ans;
        
    }
};