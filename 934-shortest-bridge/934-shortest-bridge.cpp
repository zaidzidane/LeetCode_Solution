class Solution {
public:
    
    void dfs(vector<vector<int>>&grid,int i,int j,int val){
        
       
            if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j]==0 or grid[i][j]==val){
                
                            return;
            }
        
            grid[i][j]=val;
            dfs(grid,i+1,j,val);
            dfs(grid,i,j+1,val);
            dfs(grid,i-1,j,val);
            dfs(grid,i,j-1,val);
        
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        
            int cnt=2;
            vector<vector<int>>distance(grid.size(),vector<int>(grid[0].size(),INT_MAX));
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    
                        if(grid[i][j]==1){
                              
                                dfs(grid,i,j,cnt);
                                cnt++;
                        }
                    
                }
                
            }
        
            for(int i=0;i<distance.size();i++){
                for(int j=0;j<distance[0].size();j++){
                            cout<<grid[i][j]<<"\t";
                            
                }
                cout<<endl;
            }
        
        
        
            queue<pair<int,int>>q;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                            if(grid[i][j]==2){
                                q.push({i,j});
                                distance[i][j]=0;   
                            }
                            
                }
            }
        
           
            vector<vector<int>>directions{{1,0},{0,1},{-1,0},{0,-1}};
            while(!q.empty()){
                
                    auto temp=q.front();
                    q.pop();
                    for(int k=0;k<directions.size();k++){
                        
                                int x=temp.first+directions[k][0];
                                int y=temp.second+directions[k][1];
                            
                                if(x>=0 and x<grid.size() and y>=0 and y<grid[0].size() and grid[x][y]!=2){
                                    
                                            if(distance[x][y]>distance[temp.first][temp.second]+1){
                                            distance[x][y]=distance[temp.first][temp.second]+1;                                                                 q.push({x,y});
                                            }
                                }
                        
                    }
                
            }
        
            cout<<endl;
            int minim=INT_MAX;
            for(int i=0;i<distance.size();i++){
                for(int j=0;j<distance[0].size();j++){
                            cout<<distance[i][j]<<"\t";
                            if(grid[i][j]==3)
                                    minim=min(minim,distance[i][j]);
                }
                cout<<endl;
            }
        
            return minim-1;
    }
};