class Solution {
public:
    
    int ans=0;
    
    vector<vector<int>>direction{{0,1},{1,0},{-1,0},{0,-1}};
    
    void dfs(vector<vector<int>>grid,int i,int j, int cnt){
        
            
            if(i<0 or i==grid.size() or j<0 or j==grid[0].size() or grid[i][j]==-1 ){  
                       
                        return;        
            }
        
            if(grid[i][j]==2 and cnt!=0){
               
                    return;
            }
        
            if(grid[i][j]==2 and cnt==0){
                        ans+=1;
                        return;
            }
        
            grid[i][j]=-1;
            //cout<<grid[i][j]<<endl;
            for(int k=0;k<direction.size();k++){
                    int x=i+direction[k][0];
                    int y=j+direction[k][1]; 
                    dfs(grid,x,y,cnt-1);    
                
            }
    }
    
    
    
    
    
    
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int index_i=0;
        int index_j=0;
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                        if(grid[i][j]==1){
                                index_i=i;
                                index_j=j;
                        }
                        else if(grid[i][j]==0){
                                cnt+=1;
                        }
                        
            }
        }
        
        dfs(grid,index_i,index_j,cnt+1);
        return ans;
        
        
    }
};