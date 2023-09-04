class Solution {
public:
    
    
    void dfs(vector<vector<int>>&grid,int i,int j){
        
            vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
            if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j]==0)
                    return;
            
            grid[i][j]=0;
            for(int k=0;k<directions.size();k++){
                    int x =i+directions[k][0];
                    int y =j+directions[k][1];
                    dfs(grid,x,y);
            }
    }
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        
                int m=grid.size();
                int n=grid[0].size();
                //vector<vector<bool>>visited(m,vector<bool>(n,false));
            
                for(int j=0;j<grid[0].size();j++){
                            if(grid[0][j]==1){   
                                    dfs(grid,0,j);
                            }
                            if(grid[m-1][j]==1){                                
                                    dfs(grid,m-1,j);
                            }
                }

                for(int i=0;i<grid.size();i++){
                                if(grid[i][0]==1){   
                                        dfs(grid,i,0);
                                }
                                if(grid[i][n-1]==1){                                
                                        dfs(grid,i,n-1);
                                }
                }
            
            
                int cnt=0;
                for(int i=0;i<grid.size();i++){
                    for(int j=0;j<grid[0].size();j++){
                                if(grid[i][j]==1)
                                            cnt+=1;
                    }
                }
        
                return cnt;
    }
};