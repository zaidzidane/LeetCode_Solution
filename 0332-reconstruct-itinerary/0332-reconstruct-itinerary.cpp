class Solution {
public:
    
    
    vector<string>ans;
    
     void dfs(unordered_map<string,priority_queue<string,vector<string>,greater<string>>>&gzip,string a){
                
                auto& edges=gzip[a];
                while(!edges.empty()){
                        string edge=edges.top();
                        edges.pop();
                        dfs(gzip,edge);
                }
                
                ans.push_back(a);
     }   
    
    
    
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        
        unordered_map<string,priority_queue<string,vector<string>,greater<string>>>gzip;
            
        for(auto item:tickets){
                gzip[item[0]].push(item[1]);
        }
        
        dfs(gzip,"JFK");        
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    
    
};