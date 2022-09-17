class Solution {
public:
    
    vector<vector<int>>directions{{0,1},{1,0},{-1,0},{0,-1}};
    void bfs(vector<vector<int>>grid,int i,int j,vector<vector<int>>&dp){
                queue<vector<int>>q;
                int cnt=0;
                q.push({i,j,cnt});
                while(!q.empty()){
                        vector<int>temp=q.front();
                        q.pop();
                      ; 
                        for(int k=0;k<directions.size();k++){   
                        int x=temp[0]+directions[k][0];
                        int y=temp[1]+directions[k][1];
                       
                    if(x>=0 and y>=0 and x<grid.size() and y<grid[0].size() and grid[x][y]==1){
                                    dp[x][y]=min(temp[2]+1,dp[x][y]);
                                    grid[x][y]=0;
                                    q.push({x,y,temp[2]+1});
                    
                    }
                                    
                            
                }
                    
            }
     
    }  
    
    int orangesRotting(vector<vector<int>>& grid) {
        
            vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),INT_MAX));
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                        if(grid[i][j]==2){
                                    
                                    bfs(grid,i,j,dp);
                                
                        }
                        
                }
                
                
            }
        
            int maxim=0;
            for(int i=0;i<dp.size();i++){
                for(int j=0;j<dp[0].size();j++){
                            if(dp[i][j]==INT_MAX and grid[i][j]==1) return -1;
                            if(grid[i][j]==0 or grid[i][j]==2) continue;
                            else  maxim=max(maxim,dp[i][j]);
                    
                }
            }
        
            return maxim;
        
    }
};