class Solution {
public:
    
    int check(vector<vector<int>>& board,int i,int j){
        
        vector<vector<int>>directions={{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,1},{-1,-1},{1,-1}};
        int cnt=0;
        for(int k=0;k<directions.size();k++) {
                        if((i+directions[k][0]>=0 and  i+directions[k][0]<board.size()  and j+directions[k][1]<board[0].size() and j+directions[k][1]>=0) and abs(board[i+directions[k][0]][j+directions[k][1]])==1){
                                     cnt+=1;
                        }   
                       
        }
        return cnt;   
    }
    
    
    
    void gameOfLife(vector<vector<int>>& board) {
        
            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[0].size();j++){
                            //cout<<i<<j<<endl;
                            int val=check(board,i,j);
                            // cout<<val<<endl;
                            if(board[i][j]==1 and val<2){
                                    board[i][j]=-1;
                            }
                            
                            else if(board[i][j]==1 and (val==2 or val==3)){
                                    board[i][j]=1;
                            }
                               
                            else if(board[i][j]==1 and val>3){
                                    board[i][j]=-1;
                            }
                                    
                            else if(board[i][j]==0 and (val==3)){
                                    board[i][j]=2;
                            }
                } 
            }
        
            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[0].size();j++){
                        
                            if(board[i][j]==-1){
                                    board[i][j]=0;
                            }   
                                
                            if(board[i][j]==2){
                                    board[i][j]=1;   
                            }       
                }       
            }
            
            
        
        
    }
};