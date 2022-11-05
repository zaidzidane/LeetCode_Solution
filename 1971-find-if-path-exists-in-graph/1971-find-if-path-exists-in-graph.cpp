class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
            
                vector<vector<int>>links(n);
                for(int i=0;i<edges.size();i++){
                    
                            links[edges[i][0]].push_back(edges[i][1]);
                            links[edges[i][1]].push_back(edges[i][0]);
                    
                }
        
                vector<bool>visited(n);
                queue<int>s;
                s.push(source);
                visited[source]=true;
                while(!s.empty()){
                    
                            int temp=s.front();    
                            cout<<temp<<endl;
                            s.pop();
                            if(temp==destination){
                                    return true;
                            }        
                            for(auto nbrs:links[temp]){
                                
                                        if(!visited[nbrs]){
                                            s.push(nbrs);
                                            visited[nbrs]=true;
                                        }
                            }
                            
                            
                    
                    
                }
                
            return false;
    }
};