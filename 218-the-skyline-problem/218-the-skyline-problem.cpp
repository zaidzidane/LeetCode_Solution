class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> skyline;
        map<int, vector<pair<int, int>>> map; // map[pos] = vector of {height, start or end} pairs
        
        for (auto i : buildings) 
        {
            map[i[0]].push_back({i[2], 0}); // add startpoint, for same pos - start should be considered first that's why start = 0
            map[i[1]].push_back({i[2], 1}); // add endpoint
        }
        
        multiset<int> m{0};                 //intialise with 0
        
        for (auto& [pos, heights] : map)    //sorted according to position
        {
            for (auto& [h, type] : heights) 
            {
                if (type == 0) m.insert(h);  //start
                else m.erase(m.find(h));     //end
            }
            
            int new_h = *m.rbegin();
            
            if (!skyline.empty() && skyline.back()[1] == new_h)  //if the ongoing height is same as current max height
                continue;
            else 
                skyline.push_back({pos, new_h});
        }
        
        return skyline;
    }
};