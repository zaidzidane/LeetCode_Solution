    class Solution {
public:
    
        
    bool dfs(int source,int destination,vector<bool>&visited,vector<vector<int>>&nbrs){
    
        
                if(visited[source]==true){
                    
                        return false;    
                    
                }
                visited[source]=true;
                // cout<<source<<endl;
                if(source==destination){
                        return true;
                }
                // cout<<nbrs[source].size()<<endl;
                for(int i=0;i<nbrs[source].size();i++){
                    
                              if(dfs(nbrs[source][i],destination,visited,nbrs)){
                                        return true;
                              }
                            else{
                                
                                        continue;    
                                
                            }
                        
                }
        
        
                return false;
        
    }
        
    
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
            vector<bool>visited(n,false);
            vector<vector<int>>nbrs(n);    
        
            for(int i=0;i<edges.size();i++){
                
                           nbrs[edges[i][0]].push_back(edges[i][1]); 
                            nbrs[edges[i][1]].push_back(edges[i][0]); 
                    
            }
            
            return dfs(source,destination,visited,nbrs);
            
        
        
        
    }
};