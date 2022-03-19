class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
            set<int>s1(nums.begin(),nums.end());
            
            return(nums.size()>s1.size());
        
    }
};