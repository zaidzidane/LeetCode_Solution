class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        vector<vector<pair<int,int>>>v(points.size());
        for(int i=0;i<points.size();i++){
            for(int j=0;j<points.size();j++){
                    
                        if(i==j) continue;
                        int val=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                        v[i].push_back({val,j});                 
            }
            
        }
        
        
     
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>visited(points.size(),0);
        int ans=0;
        pq.push({0,0});
        while(!pq.empty()){
            
                    pair<int,int>temp=pq.top();
                    pq.pop();
                    int to=temp.second;
                    int weight=temp.first;
                    if(visited[to]){
                                continue;
                        
                    }
                    ans+=weight;
                   
                    visited[to]=1;
                    for(auto item:v[to]){
                            if(!visited[item.second]){
                                        
                                        pq.push({item.first,item.second});
                                
                            }
                        
                    }
            
        }
        
        return ans;
    }
};