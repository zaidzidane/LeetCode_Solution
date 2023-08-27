class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
             vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
             vector<vector<int>>near(mat.size(),vector<int>(mat[0].size(),INT_MAX));
             vector<vector<bool>>seen(mat.size(),vector<bool>(mat[0].size(),false));
             queue<vector<int>>q;
                                     
             for(int i=0;i<mat.size();i++){
                 for(int j=0;j<mat[0].size();j++){
                            if(mat[i][j]==0){
                                    q.push({i,j,0});
                                    near[i][j]=0;
                                    seen[i][j]=true;
                                    
                            }
                 }              
             }
            
            while(!q.empty()){  
                        vector<int>temp=q.front();
                        q.pop();
                        for(int i=0;i<directions.size();i++){
                                int x=temp[0]+directions[i][0];
                                int y=temp[1]+directions[i][1];
                                if(x>=0 and x<mat.size() and y>=0 and y<mat[0].size() and seen[x][y]==false){
                                    
                                            near[x][y]=min(near[x][y],temp[2]+1);
                                            q.push({x,y,near[x][y]});
                                            seen[x][y]=true;
                                    
                                }                                
                        }
                           
            }
                                     
                                     
            return near;             
             
                                     
                                     
        
    }
};