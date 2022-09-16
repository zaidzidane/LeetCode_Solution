class Solution {
public:
    
    vector<vector<int>>ans;
    
    void dfs(vector<vector<int>>&graph,int start,int end,vector<int>row,vector<bool>visited){
        
                visited[start]=true;
                 row.push_back(start);
                if(start==end){
                        ans.push_back(row);
                        return;
                 }
               
                for(int node:graph[start]){
                                    
                        dfs(graph,node,end,row,visited);
                                            
                }
                        
                }
    
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
       vector<int>row;
        vector<bool>visited(graph.size(),false);
       dfs(graph,0,graph.size()-1,row,visited); 
        return ans;
        
        
        
        
    }
};