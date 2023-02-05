class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
            unordered_map<int,int>gzip;
            
            for(int i=0;i<nums.size();i++){
                
                    if(gzip.find(nums[i])!=gzip.end() and i-gzip[nums[i]]<=k)
                            return true;
                
                    else 
                            gzip[nums[i]]=i;
            }
        
            return false;
    }
};