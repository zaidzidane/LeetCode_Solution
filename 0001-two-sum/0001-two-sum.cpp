class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
            unordered_map<int,int>gzip;
            for(int i=0;i<nums.size();i++){
                
                    if(gzip.find(target-nums[i])!=gzip.end()){
                                return {gzip[target-nums[i]],i};        
                    }
                    else{
                                gzip[nums[i]]=i;
                        
                    }
                
            }
        
            return {-1,-1};
    }
};