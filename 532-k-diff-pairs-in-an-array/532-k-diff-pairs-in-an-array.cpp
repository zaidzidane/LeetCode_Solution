class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        
        sort(nums.begin(),nums.end());
        unordered_map<int,int>gzip;
        set<vector<int>>s;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
                if(gzip[-k+nums[i]]!=0){    
                        s.insert({-k+nums[i],nums[i]});
                        gzip[-k+nums[i]]=0;
                }
                if((gzip[k+nums[i]]!=0)){
                         s.insert({k+nums[i],nums[i]});
                         gzip[k+nums[i]]=0;
                }
                gzip[nums[i]]=1;
        }
        return s.size();
    }
};