class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    
            
            int m=grid.size()-1;
            int n=grid[0].size()-1;
        
            
            int temp;
            int q=0;
            while(q<k){
            int last=grid[m][n];
            for(int i=0;i<=m;i++){
                for(int j=0;j<=n;j++){
                        temp=grid[i][j];
                        grid[i][j]=last;
                        last=temp;    
                }
            }
                q++;
            }
            return grid;    
        
            
    }
    
};