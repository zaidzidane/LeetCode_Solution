class Solution {
public:
    
    
 
    
    
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1},{-1,1},{1,-1},{-1,-1},{1,1}};
        
       
        
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        if(grid[0][0] or grid[m][n]){
                return -1;
        }        
        
         vector<vector<bool>>seen(m+1,vector<bool>(n+1,false));
        queue<vector<int>>q;
        q.push({0,0,1});
        
        while(!q.empty()){
            
            vector<int>ans=q.front();
            q.pop();
            if(ans[0]==m and ans[1]==n)
                    return ans[2];
                    
            for(int i=0;i<directions.size();i++){
                
                int x=ans[0]+directions[i][0];
                int y=ans[1]+directions[i][1];
                
                if(x>=0 and x<=m and y>=0 and y<=n and seen[x][y]==false and grid[x][y]!=1){
                    
                            // cout<<x<<"\t"<<y<<ans[2]+1<<endl;
                            q.push({x,y,ans[2]+1});
                            seen[x][y]=true;
                    
                }
                
                
            }    
            
            
            
        }
        
        return -1;
        
        
    }
};