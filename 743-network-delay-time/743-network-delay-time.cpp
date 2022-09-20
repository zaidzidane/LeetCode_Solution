class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
                vector<pair<int,int>>v[n+1];
                for(int i=0;i<times.size();i++){
                        v[times[i][0]].push_back({times[i][2],times[i][1]});
                }
        
                
                vector<int>dist(n+1,INT_MAX);
                set<pair<int,int>>s;    
                dist[k]=0;
                s.insert({0,k});
                while(!s.empty()){
                        auto it=s.begin();
                        int node=it->second;
                        int nodeDist=it->first;
                        s.erase(it);
                        for(auto item:v[node]){
                                    int nbr=item.second;
                                    int currentedge=item.first;
                                    if(dist[node]+currentedge<dist[nbr]){
                                                auto f=s.find({dist[nbr],nbr});
                                                if(f!=s.end()){
                                                        s.erase(f);
                                
                                                }
                                                dist[nbr]=dist[node]+currentedge;
                                                s.insert({dist[nbr],nbr});
                                        
                                    }
                        }
                    
                }
                int maxim=0;
                for(int i=1;i<dist.size();i++){
                        cout<<dist[i]<<endl;
                        if(dist[i]==INT_MAX) return -1;
                    
                        else{
                            
                                maxim=max(maxim,dist[i]);   
                            
                        }
                    
                }
            
                return maxim;
    }   
};  