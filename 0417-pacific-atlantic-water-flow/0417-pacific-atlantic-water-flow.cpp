class Solution {
public:
    
    vector<vector<int>>directions{{0,1},{1,0},{0,-1},{-1,0}};
    void bfs_l(vector<vector<int>>&heights,vector<vector<bool>>&visited,vector<vector<bool>>&po) {
            int m=heights.size();
            int n=heights[0].size();
            queue<pair<int,int>>q;
            for(int i=0;i<m;i++){
                    po[i][0]=true;
                    visited[i][0]=true;
                    q.push({i,0});
            }
        
            for(int i=0;i<n;i++){
                    po[0][i]=true;
                    visited[0][i]=true;
                    q.push({0,i});
            }
        

        
         while(!q.empty()){
                
                    auto temp= q.front();
                    q.pop();
                    
                    for(int i=0;i<directions.size();i++){
                        
                            int x=temp.first+directions[i][0];
                            int y=temp.second+directions[i][1];
                            
                            if(x<0 or y<0 or x>=heights.size() or y>=heights[0].size() or heights[x][y]<heights[temp.first][temp.second] or visited[x][y]==true){
                                    continue;
                            }
                        
                            po[x][y]=true;
                            visited[x][y]=true;
                            q.push({x,y});
                        
                    }
    }
        
    }
    
    void bfs_r(vector<vector<int>>&heights,vector<vector<bool>>&visited,vector<vector<bool>>&po){
            int m=heights.size();
            int n=heights[0].size();
            queue<pair<int,int>>q;
            for(int i=0;i<m;i++){
                    po[i][n-1]=true;
                    visited[i][n-1]=true;
                    q.push({i,n-1});
            }
        
            for(int i=0;i<n;i++){
                    po[m-1][i]=true;
                    visited[m-1][i]=true;
                    q.push({m-1,i});
            }
            
          
        
         while(!q.empty()){
                
                    auto temp= q.front();
                    q.pop();
                    
                    for(int i=0;i<directions.size();i++){
                        
                            int x=temp.first+directions[i][0];
                            int y=temp.second+directions[i][1];
                            
                            if(x<0 or y<0 or x>=heights.size() or y>=heights[0].size() or heights[x][y]<heights[temp.first][temp.second] or visited[x][y]==true){
                                    continue;
                            }
                        
                            po[x][y]=true;
                            visited[x][y]=true;
                            q.push({x,y});
                        
                    }
    }
        
    }
    
    
    

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
            int m=heights.size();
            int n=heights[0].size();
            vector<vector<bool>>po(m,vector<bool>(n,false));
            vector<vector<bool>>visited(m,vector<bool>(n,false));
        
            bfs_l(heights,visited,po);
        
            vector<vector<bool>>ao(m,vector<bool>(n,false));
            vector<vector<bool>>visited_new(m,vector<bool>(n,false));
        
            
            bfs_r(heights,visited_new,ao);
            vector<vector<int>>ans;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                        if(po[i][j] and ao[i][j]){    
                        
                                ans.push_back({i,j});
                        }
                } 
            }
        
          
        
        
        
        
           
              return ans;  
                
                
            }
        
            
            
        
        
        
        
    
};