class Solution {
public:
    
    unordered_map<int,vector<int>>gzip;
    void dfs(int source,int destination,vector<bool>&visited){
        
            visited[source]=true;
            
            for(int nbrs:gzip[source]){
                
                        if(!visited[nbrs]){
                            
                                   
                                    dfs(nbrs,destination,visited);
                            
                        }
                
            }
        
            return;
        
        
    }
    
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
            if(source==destination){
                    return true;
            }
        
            for(auto item:edges){
                    gzip[item[0]].push_back(item[1]);
                    gzip[item[1]].push_back(item[0]);
            }
        
            vector<bool>visited(n,false);
        
            dfs(source,destination,visited);
        
            return visited[destination];
        
        
    }
};