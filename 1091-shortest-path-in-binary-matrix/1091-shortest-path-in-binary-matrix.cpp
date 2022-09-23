class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
            int m=grid.size()-1;
            int n=grid[0].size()-1;
            
            if(grid[0][0] or grid[m][n]) return -1;
            if(m==0 or n==0) return 1;
            vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
            queue<pair<int,int>>q;
            vector<vector<int>>check{{-1,0},{1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
            vector<vector<int>>distance(m+1,vector<int>(n+1,0));
            q.push({0,0});
            int len=1;
            distance[0][0]=1;
            
            while(!q.empty()){
                
                    auto temp=q.front();
                    q.pop();
                    for(int i=0;i<check.size();i++){
                        
                            int x=temp.first+check[i][0];
                            int y=temp.second+check[i][1];
                            
                            if(x>=0 and x<=m and y>=0 and y<=n and visited[x][y]==false and grid[x][y]!=1) {
                                
                                        q.push({x,y});
                                        visited[x][y]=true;
                                        distance[x][y]=distance[temp.first][temp.second]+1;
                                        if(x==m and y==n){
                                            
                                                return  distance[x][y];
                                        }
                                
                            }
                        
                        
                    }
                
            }
        
        
            return -1;
        
    }
};