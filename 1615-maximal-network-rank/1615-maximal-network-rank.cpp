class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        
            vector<set<int>>v1(n);
        
            for(int i=0;i<roads.size();i++){
                
                        v1[roads[i][0]].insert(roads[i][1]);
                        v1[roads[i][1]].insert(roads[i][0]);
                
            }
        
            int maxim=0;
        
            for(int i=0;i<v1.size();i++){
                
                for(int j=i+1;j<v1.size();j++){
                            int val=v1[i].size()+v1[j].size();
                            if(v1[i].find(j)!=v1[i].end())
                                  maxim=max(maxim,val-1);
                        
                            else{
                                
                                  maxim=max(maxim,val);  
                                
                            }   
                    
                }
                
            }
        
        
            return maxim;
        
    }
};