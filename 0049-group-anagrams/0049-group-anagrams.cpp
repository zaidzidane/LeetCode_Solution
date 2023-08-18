class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>gzip;
        for(string item:strs){
                string ans=item;
                sort(ans.begin(),ans.end());
                gzip[ans].push_back(item);
        }
        
        vector<vector<string>>ans;
        for(auto item: gzip){
                    ans.push_back(item.second);
        }
        
        return ans;
        
    }
};