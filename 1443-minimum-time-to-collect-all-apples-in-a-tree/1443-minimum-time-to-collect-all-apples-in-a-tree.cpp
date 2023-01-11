class Solution {
public:
    
    
    int dfs(int node,int parent,vector<vector<int>>&adj,vector<bool>&hasApple){
        
            // cout<<node<<endl;
            int sum=0;
            int totaltime=0;
            for(auto child:adj[node]){
                
                if(child==parent) continue;
                
                sum=dfs(child,node,adj,hasApple);
                
                
                if(sum or hasApple[child]){
                          totaltime+=sum+2;

                }        

        
            } 
        
            return totaltime;
        
    }
    
    
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        
        
            vector<vector<int>>all_edges(n);
            for(auto item:edges){
        
                        all_edges[item[0]].push_back(item[1]);
                        all_edges[item[1]].push_back(item[0]);
                
            }
            
            return dfs(0,-1,all_edges,hasApple);
            
        
        
    }
};