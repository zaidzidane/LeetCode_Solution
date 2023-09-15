class Solution {
public:
    
    int distance(vector<int>p1,vector<int>p2){
            
            return abs(p1[0]-p2[0])+abs(p1[1]-p2[1]);
    }
    
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        
            int n=points.size();
            vector<vector<pair<int,int>>>v(n);
            for(int i=0;i<points.size();i++){
                for(int j=i+1;j<points.size();j++){
                            int val=distance(points[i],points[j]);
                            v[i].push_back({val,j});
                            v[j].push_back({val,i});
                }
            }     
        
            vector<bool>visited(n,false);
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            pq.push({0,0});
            int ans=0;
            while(!pq.empty()){
                auto temp=pq.top();
                pq.pop();
                if(visited[temp.second]){
                        continue;   
                }
                ans+=temp.first;
                visited[temp.second]=true;
                for(auto node:v[temp.second]){
                    pq.push({node.first,node.second});        
                }      
            }
             return ans;
                   
        
    }
};