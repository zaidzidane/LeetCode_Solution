class Solution {
public:
    
    vector<vector<int>>ans;
    void dfs(vector<vector<int>>graph,int idx,vector<int>path){
        
            //cout<<idx<<endl;
            path.push_back(idx);
            if(idx==graph.size()-1){
                    //cout<<idx<<endl;
                    ans.push_back(path);
                    return;
            }        
            
            for(int i=0;i<graph[idx].size();i++){
                 dfs(graph,graph[idx][i],path);            
            }
        
            
    }
    
    
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        
            vector<int>path;
            dfs(graph,0,path);
            return ans;
        
        
    }
};