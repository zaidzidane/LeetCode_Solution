class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        vector<vector<int>>graph(n);
        
        for(int i=0;i<roads.size();i++){
                graph[roads[i][0]].push_back(roads[i][1]);
                graph[roads[i][1]].push_back(roads[i][0]);
        }
        
        set<vector<int>>s(roads.begin(),roads.end());
        
        int max_cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                    int cnt=graph[i].size() +graph[j].size();
                    if(s.contains({i,j}) or s.contains({j,i})) cnt-=1;
                    max_cnt=max(max_cnt,cnt);
            }   
        }
        return max_cnt;
        
    }
};