class Solution {
public:
    int minDifference(vector<int>& nums) {
        
            if(nums.size()<=3){
                    return 0;
            }
            sort(nums.begin(),nums.end());
            int n=nums.size()-1;
            return min({nums[n-3]-nums[0],nums[n]-nums[3],nums[n-2]-nums[1],nums[n-1]-nums[2]});
            
        
        
        
    }
};