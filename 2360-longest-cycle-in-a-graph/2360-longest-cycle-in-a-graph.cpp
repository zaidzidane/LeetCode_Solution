class Solution {
public:
    int max_size=-1;
    void dfs(vector<int>&indegree,vector<int>&edges,vector<bool>&visited,int size,int indx){
        
            
            if(indx>=edges.size()) return;
            if(visited[indx]==true and indegree[indx]!=0){
                            cout<<indx<<endl;
                            max_size=max(max_size,size);
                            return;
            }
            
            visited[indx]=true;
        
            if(edges[indx]==-1 or indegree[indx]==0)
                        
                    dfs(indegree,edges,visited,size+1,indx+1);
                    
            else dfs(indegree,edges,visited,size+1,edges[indx]);
                    
    } 
    
    
    int longestCycle(vector<int>& edges) {
            
            vector<int>indegree(edges.size(),0);
            vector<int>outdegree(edges.size(),0);
            queue<int>q;
            
            for(int i=0;i<edges.size();i++){
                
                    if(edges[i]==-1) continue;
                    indegree[edges[i]]++;                        
                    
            }   
            for(int i=0;i<edges.size();i++){
                
                    if(indegree[i]==0){
                            q.push(i);
                    }
                
            }
            
            while(!q.empty()){
                
                        int temp=q.front();
                        q.pop();
                        if(edges[temp]==-1)
                            continue;
                        indegree[edges[temp]]--;
                        if(indegree[edges[temp]]==0){
                                //cout<<edges[temp]<<endl;
                                q.push(edges[temp]);
                        }
            }
        
            int cnt=0;
            vector<bool>visited(edges.size(),false);
            for(int i=0;i<indegree.size();i++){
                
                    if(indegree[i]==0)
                                visited[i]=true;
            }
            
            for(int i=0;i<visited.size();i++){
                
                    if(visited[i]==false)
                         dfs(indegree,edges,visited,0,i);
                
            }
            
            return max_size;
            
        
    }
};