class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        
        vector<vector<int>>check{{0,1,},{1,0},{-1,0},{0,-1}};
        queue<pair<int,int>>q;
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                    
                    if(grid[i][j]){
                        q.push({i,j});
                        dp[i][j]=0;
                    }
            }
        }
        
        while(!q.empty()){
            
                auto temp=q.front();
                q.pop();
                
                for(int k=0;k<check.size();k++){
                    
                        int x=temp.first+check[k][0];
                        int y=temp.second+check[k][1];
                        
                        if(x>=0 and x<grid.size() and y>=0 and y<grid[0].size() and grid[x][y]!=1 and dp[x][y]==INT_MAX){
                            
                                   dp[x][y]=dp[temp.first][temp.second]+1;
                                    q.push({x,y});
                                
                        }
                    
                    
                }
                
        }
        
        int maxim=0;
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[0].size();j++){
                
                  maxim=max(maxim,dp[i][j]);
                
            }
            
        }
        
        return maxim==INT_MAX  or maxim==0 ?-1:maxim;
        
    }
};