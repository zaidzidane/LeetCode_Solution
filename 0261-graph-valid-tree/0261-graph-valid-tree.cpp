class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        
        if(edges.size()==0 and n==1){
                return true;
        }
        vector<vector<int>>v(n);
        for(int i=0;i<edges.size();i++){
                v[edges[i][0]].push_back(edges[i][1]);
                v[edges[i][1]].push_back(edges[i][0]);   
        }  
        vector<bool>visited(n,false);
        queue<int>q;
        q.push(0);
        visited[0]=true;
        vector<int>parent(n,-1);   
        while(!q.empty()){
                int temp=q.front();
                q.pop();
                for(auto item:v[temp]){
                        if(item==parent[temp]){
                                continue;
                        }
                        if(visited[item]){
                                return false;
                        }
                        parent[item]=temp;
                        visited[item]=true;
                        q.push(item);
                }
        }
        
        
        for(int i=0;i<visited.size();i++){
                cout<<i<<endl;
                if(!visited[i]) return false;
            
        }
        
        return true;
    }
};