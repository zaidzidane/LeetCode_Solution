class Solution {
public:
    
    int dfs(int i,int j,int m,int n,vector<vector<int>>&df){
        
        if(i>=m or j>=n){    
                return 0;
        }
        
        if(i==m-1 and j==n-1){
            
                return 1;
        }
        
        if(df[i][j]!=-1){
                
                return df[i][j];
        }
            
        df[i][j]=dfs(i+1,j,m,n,df)+dfs(i,j+1,m,n,df);
        return df[i][j];
        
        
        
    }
    
    
    int uniquePaths(int m, int n) {
        
            vector<vector<int>>df(m,vector<int>(n,-1));
            return dfs(0,0,m,n,df);
        
        
    }
};