class Solution {
public:
    
    void getcoordinates(int n,int s,int& row,int& col){
        
            row=n-1-(s-1)/n;
            col=(s-1)%n;
            
            if((n%2==1 && row%2==1) or(n%2==0 and row%2==0)){
                
                    col=n-1-col;
            }
        
        
    }
    
    
    int snakesAndLadders(vector<vector<int>>& board) {
             
    queue<pair<int,int>>q;
    int n=board.size();
    vector<bool>seen((n*n)+1,false);
    q.push({1,0});
    seen[1]=true;
    int cnt=0;
    bool flag=false;
    int minim=0;
        
        
    while(!q.empty()){
            
                int row,col,s=q.front().first;
                int dist=q.front().second;
                cout<<s<<endl;
                q.pop();
                
                if(s==n*n){
                        return dist;
                }
                for(int i=1;i<=6;i++){
                    if(s+i>n*n){
                            continue;
                    }
                    getcoordinates(n,s+i,row,col);
                    int sfinal=board[row][col]==-1?s+i:board[row][col];
                    
                    if(seen[sfinal]==false){
                        seen[sfinal]=true;
                        q.push({sfinal,dist+1});
                    }   
                }
                
    }
    
     return -1;   
        
    }
    
    
};