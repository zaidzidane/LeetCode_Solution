class Solution {
public:
    
    
    void dfs(vector<vector<char>>&grid,int i,int j){
        
            if(i>=grid.size() or j>=grid[0].size() or i<0 or j<0 or grid[i][j]=='0'){
                        return;   
            }
        
            cout<<i<<j<<endl;
            grid[i][j]='0';
            dfs(grid,i+1,j);
            dfs(grid,i,j+1);
            dfs(grid,i-1,j);
            dfs(grid,i,j-1);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
    
        int cnt=0;
        for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){          
                            if(grid[i][j]!='0'){
                                    // cout<<i<<j<<endl;
                                    dfs(grid,i,j);
                                    cnt+=1;
                            }
                }
        }
        
        return cnt;
    }
};