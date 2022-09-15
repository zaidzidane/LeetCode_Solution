class Solution {
public:
    
    void dfs(vector<vector<int>>&grid,int i,int j,int val){
        
            
            if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]==0 or grid[i][j]==val){
                
                        return;  
            }
               
                grid[i][j]=val;
                dfs(grid,i+1,j,val);
                dfs(grid,i-1,j,val);
                dfs(grid,i,j+1,val);
                dfs(grid,i,j-1,val);
        
    }
    
    bool dfs2(vector<vector<int>>&grid,vector<vector<int>>&grid2,int i,int j,int val){
        
          
           
             if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]==0 ){
                
                        return true;  
            }
        
        
            if(grid[i][j]==1 and grid2[i][j]!=val){
                
                    return false;
            }
        
            
            grid[i][j]=0;
         
            bool val1=dfs2(grid,grid2,i+1,j,val);
            bool val2=dfs2(grid,grid2,i,j+1,val);
            bool val3=dfs2(grid,grid2,i-1,j,val);
            bool val4=dfs2(grid,grid2,i,j-1,val);
        
            
            return val1 and val2 and val3 and val4;
        
    }
    
    
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
            int cnt=0;
            for(int i=0;i<grid1.size();i++){
                for(int j=0;j<grid1[0].size();j++){
                        
                        if(grid1[i][j]==1){
                            dfs(grid1,i,j,++cnt);
                        }
                }    
            }
        
        
            int val=0;
            for(int i=0;i<grid2.size();i++){
                    for(int j=0;j<grid2[0].size();j++){
                            if(grid2[i][j]==1 and grid1[i][j]!=0){
                                if(dfs2(grid2,grid1,i,j,grid1[i][j])){
                                       
                                        val+=1;
                                }
                                
                            }
                        
                    }
                    
            }
        
            return val;   
        
            
            
            
    }
};