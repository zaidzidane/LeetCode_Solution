class Solution {
public:
    
    vector<vector<int>>directions{{0,1},{1,0}};
  
    
    void dfs(vector<vector<int>>&grid, vector<vector<int>>&dp,int& i,int& j,int total){
        
            if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size()){
                    return;
            }
            total+=grid[i][j];
            if(dp[i][j]<=total){
                        return;
            }
            dp[i][j]=total;
            for(int k=0;k<directions.size();k++){
                   
                    int x=i+directions[k][0];
                    int y=j+directions[k][1];
                    dfs(grid,dp,x,y,total);
                
            }
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        
            vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),INT_MAX));
            int i=0;
            int j=0;
            dfs(grid,dp,i,j,0);
            return dp[grid.size()-1][grid[0].size()-1];
        
        
    }
};