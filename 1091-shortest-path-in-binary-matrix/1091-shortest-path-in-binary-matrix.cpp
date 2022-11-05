class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
     
            vector<vector<int>>directions{{0,1},{0,-1},{1,0},{1,1},{-1,1},{-1,-1},{-1,0},{1,-1}};
        
            queue<pair<int,int>>q;
            if(grid[0][0]==1 or grid[grid.size()-1][grid[0].size()-1]==1){
                    return -1;
            }
        
            q.push({0,0});
            int cnt=0;
            map<pair<int,int>,int>gzip;
            gzip[{0,0}]=1;
            while(!q.empty()){
                
                    pair<int,int>temp=q.front();
                    q.pop();
                    
                    for(int i=0;i<directions.size();i++){
        
                            int x=temp.first+directions[i][0];
                            int y=temp.second+directions[i][1];
                        
                            if(temp.first==grid.size()-1 and temp.second==grid[0].size()-1){
                                
                                        return gzip[{temp.first,temp.second}];
                                    
                            }
                            if(x>=0 and x<grid.size() and y>=0 and y<grid.size() and grid[x][y]==0 and gzip.find({x,y})==gzip.end()){
                                    
                                            gzip[{x,y}]=gzip[{temp.first,temp.second}]+1;
                                            q.push({x,y});
                                
                                
                            }
                    
                    }
                
                
                
            }
     
            return -1;
    }
    
};