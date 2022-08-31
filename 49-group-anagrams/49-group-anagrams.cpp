class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
        unordered_map<string,vector<string>>gzip;
            for(auto item:strs){
                
                string val=item;
                sort(val.begin(),val.end());
                gzip[val].push_back(item);
                
            }
        
        
            vector<vector<string>>ans;
        
            for(auto item:gzip){
                
                
                ans.push_back(item.second);
            }
        
        
            return ans;
    }
};