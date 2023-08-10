class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        vector<vector<int>>graph(n);
        
        int parent=-1;
        for(int i=0;i<manager.size();i++){
                if(manager[i]==-1){
                        parent=i;
                        continue;
                }
                
                graph[manager[i]].push_back(i);
                
        }
        
        
        vector<int>visited(n,false);
        vector<int>distance(n,INT_MAX);
        queue<int>q;
        q.push(parent);
        distance[parent]=0;
        while(!q.empty()){
            
                int temp=q.front();
                q.pop();
                for(int i=0;i<graph[temp].size();i++){
                        if(visited[graph[temp][i]]){
                                continue;
                        }                 
                        q.push(graph[temp][i]);  
                        distance[graph[temp][i]]=min(distance[graph[temp][i]],distance[temp]+informTime[temp]);
                }    
            
        }
        
        int maxim=0;
        for(int i=0;i<distance.size();i++){
            
                maxim=max(distance[i],maxim);    
            
        }
        
        return maxim;
    }
};