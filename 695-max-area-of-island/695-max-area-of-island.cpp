class Solution {
public:
    
    
    void dfs(vector<vector<int>>&grid,int i, int j,int& cnt){
        
    
                    if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j]==0){
                                    
                                return;
                        
                    }
        
                    grid[i][j]=0;
                    cnt+=1;
                    dfs(grid,i+1,j,cnt);
                    dfs(grid,i,j+1,cnt);
                    dfs(grid,i-1,j,cnt);
                    dfs(grid,i,j-1,cnt);
        
        
        
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
            int max_area=0;
            for(int i=0;i<grid.size();i++){  
                for(int j=0;j<grid[0].size();j++){
                    
                            if(grid[i][j]!=0){
                                    int cnt=0;
                                    dfs(grid,i,j,cnt);
                                    max_area=max(max_area,cnt);
                                
                            }   
                    
                }
                
                
            }
        
            return max_area;
        
    }
};