class Solution {
public:
    
    vector<int>ans;
    void dfs(unordered_map<int,vector<int>>&gzip,int kill){
        
            ans.push_back(kill);
            // if(gzip.find(kill)==gzip.end()){
            //             return;
            // }
            
            for(auto item:gzip[kill]){
                
                    // ans.push_back(item);
                    dfs(gzip,item);
             
            }
      
    }
    
    
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        
       unordered_map<int,vector<int>>gzip;
        
//         for(int i=0;i<pid.size();i++){
//                     gzip[pid[i]].push_back(pid[i]);
                    
//         }
        
        
        for(int i=0;i<ppid.size();i++){
                    gzip[ppid[i]].push_back(pid[i]);
        }
        
        dfs(gzip,kill);
        return ans;
        
    }
};