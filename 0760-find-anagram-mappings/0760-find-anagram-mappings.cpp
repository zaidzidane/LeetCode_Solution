class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
            
            unordered_map<int,set<int>>gzip;
            vector<int>ans;
            for(int i=0;i<nums2.size();i++){
                    gzip[nums2[i]].insert(i);
            }
        
            for(int i=0;i<nums1.size();i++){
                        ans.push_back(*gzip[nums1[i]].begin());
                        set<int>&s=gzip[nums1[i]];
                        s.erase(*gzip[nums1[i]].begin());
            }
            
            return ans;
    }
};