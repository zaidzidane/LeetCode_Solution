class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
            bool increase=true;
            bool decrease=true;
        
            for(int i=1;i<nums.size();i++){
                
                    if(nums[i]>nums[i-1])
                            decrease=false;
                    if(nums[i]<nums[i-1])
                            increase=false;
                
            }
        
            return increase or decrease;
    }
};