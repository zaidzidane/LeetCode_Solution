class Solution {
public:
    
    vector<vector<int>>directions={{1,0},{0,1},{-1,-0},{0,-1}};
    
    void dfs(vector<vector<int>>&grid,int i,int j){
        
            if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size()or grid[i][j]==0){
                
                            return;
                
            }
        
            if(grid[i][j]==1){
                
                grid[i][j]=0;
            }
        
        
            for(int k=0;k<directions.size();k++){
                
                int x=i+directions[k][0];
                int y=j+directions[k][1];
                
                dfs(grid,x,y);    
                
                
            }
        
    }
    
    
    
    
    
    
    int numEnclaves(vector<vector<int>>& grid) {
    
        
            for(int j=0;j<grid[0].size();j++){
                        if(grid[0][j]==1){
                            
                                dfs(grid,0,j);
                        }
                 }
                             
             for(int j=0;j<grid[0].size();j++){
                        if(grid[grid.size()-1][j]==1){
                            
                                dfs(grid,grid.size()-1,j);
                        }
                 }
                 
              for(int i=0;i<grid.size();i++){
                        if(grid[i][0]==1){
                            
                                dfs(grid,i,0);
                        }
                 }
                             
             for(int i=0;i<grid.size();i++){
                        if(grid[i][grid[0].size()-1]==1){
                            
                                dfs(grid,i,grid[0].size()-1);
                        }
             }
                 
            
            int cnt=0;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    
                        if(grid[i][j]==1) cnt++;
                    
                }
                
            }
        
            return cnt;
    }
};