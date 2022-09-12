class Solution {
public:
    
    bool dfs(vector<vector<int>>&grid,int row,int col){
            grid[row][col]=0;
            for(int i=0;i<grid.size();i++){
                       if(grid[i][col]) {
                            grid[i][col]=2;  
                            grid[row][col]=2;
                           return true;
                       }
            }
            
            for(int j=0;j<grid[0].size();j++){
                
                        if(grid[row][j]){
                            
                            grid[row][j]=2;
                            grid[row][col]=2;
                            return true;   
                
                        }
            }
        
            grid[row][col]=2;
            return false;
        
    }
    
    
    int countServers(vector<vector<int>>& grid) {
        
            int total=0;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                        
                            if(grid[i][j]) total+=1;
                }
            }
        
            int cnt=0;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    
                            if(grid[i][j]==1 and !dfs(grid,i,j))
                                
                                        cnt+=1;
                 
                }
                
            }
        
            return total-cnt;
    }
};