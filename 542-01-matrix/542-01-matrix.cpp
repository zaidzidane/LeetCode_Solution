class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int m=mat.size()-1;
        int n=mat[0].size()-1;
        
        vector<vector<int>>distance(m+1,vector<int>(n+1,INT_MAX));
        vector<vector<int>>check{{1,0},{-1,0},{0,1},{0,-1}};
        queue<pair<int,int>>q;
                                    
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                    if(mat[i][j]==0){
                        q.push({i,j});
                        distance[i][j]=0;
                    }
            }
        }
        
        while(!q.empty()){
            
                    auto temp=q.front();
                    q.pop();
                    
                    for(int k=0;k<check.size();k++){
                        
                            int x=temp.first+check[k][0];
                            int y=temp.second+check[k][1];
                            
                            if(x>=0 and x<=m and y>=0 and y<=n and mat[x][y]!=0 ){
                                    
                                            if(distance[x][y]>distance[temp.first][temp.second]+1){
                                                distance[x][y]=distance[temp.first][temp.second]+1;
                                                q.push({x,y});
                                            }
                                                
                            }
                        
                    }
            
        }
        
        return distance;
        
    }
};