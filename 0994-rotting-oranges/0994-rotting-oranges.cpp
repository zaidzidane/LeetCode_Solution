class Solution {
public:
    
   int orangesRotting(vector<vector<int>>& grid) {
    
            vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};     
            vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),0));
            queue<pair<int,int>>q;
            for(int i=0;i<grid.size();i++){
                    for(int j=0;j<grid[0].size();j++){
                                
                            if(grid[i][j]==2){
                                        q.push({i,j});
                            }                   
                    }    
            }
        
        
            
            while(!q.empty()){
                
                        pair<int,int>temp = q.front();
                        q.pop();
                        for(int i=0;i<directions.size();i++){
                            
                                int x=temp.first+directions[i][0];
                                int y=temp.second+directions[i][1];
                            
                                if(x>=0 and x<grid.size() and y>=0 and y<grid[0].size() and grid[x][y]==1){
                                    
                                            dp[x][y]=dp[temp.first][temp.second]+1;
                                            q.push({x,y});
                                            grid[x][y]=2;
                                            
                                    
                                }
                            
                            
                        }
               
            }
            
        int maxim=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]==2){
                        
                            maxim=max(maxim,dp[i][j]);
                                
                    }
                    
                    if(grid[i][j]==1){
                                return -1;
                    }
                
            }
            
        }
           
        return maxim;        
        
    }
};