class Solution {
public:
    
    vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
    
    int dfs(vector<vector<int>>&grid,int i,int j){
            if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j]==0){
                        return 0;
            }      
            int cnt=1;
            grid[i][j]=0;
            for(int k=0;k<directions.size();k++){
                    int x=i+directions[k][0];
                    int y=j+directions[k][1];
                    cnt+=dfs(grid,x,y);
            }
            return cnt;
    }
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]==1){
                            // cout<<dfs(grid,i,j)<<endl;
                            int cnt=dfs(grid,i,j);
                            //cout<<cnt<<endl;
                            max_cnt=max(max_cnt,cnt);
                    }
            }
        }
        return max_cnt;
    }
};