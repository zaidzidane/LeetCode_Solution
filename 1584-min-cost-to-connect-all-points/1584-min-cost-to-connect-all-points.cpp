class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
            int n=points.size();
            
            vector<bool>visited(n,false);
            vector<vector<pair<int,int>>>v(n);
        
        
            for(int i=0;i<points.size();i++){
                for(int j=i+1;j<points.size();j++){
                        
                        int val=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                        v[i].push_back({val,j});
                        v[j].push_back({val,i});
                        
                }
                
            }
        
            // cout<<"yes"<<endl;
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            int ans=0;
            pq.push({0,0});
            while(!pq.empty()){
                
                        auto temp=pq.top();
                        pq.pop();
                        
                        // cout<<temp.first<<"\t"<<temp.second<<endl;
                        if(visited[temp.second]){
                                
                                    continue;
                        }
                
                        ans+=temp.first;
                        visited[temp.second]=true;
                        for(auto item:v[temp.second]){
                            
                                    pq.push({item.first,item.second});
                            
                            
                        }
                
                
            }
        
        
            return ans;
    }
};