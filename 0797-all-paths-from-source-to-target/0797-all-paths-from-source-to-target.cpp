class Solution {
public:
    
    
    vector<vector<int>>ans;
    
    void  dfs(vector<vector<int>>graph,int start,int end,vector<int>path){
        
            if(start==end){
                    path.push_back(end);
                    ans.push_back(path);
                    return;
            }
            else{
                
                    path.push_back(start);
                    for(int i=0;i<graph[start].size();i++){
                        
                                dfs(graph,graph[start][i],end,path);
                                                    
                    }
                        
            }
        
    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    
            int n=graph.size();
            vector<bool>visited(n,false);   
            vector<int>path;
            dfs(graph,0,n-1,path);
            return ans;
        
    }
};