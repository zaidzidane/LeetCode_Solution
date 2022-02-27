class Solution {
public:
    vector<int> sortTransformedArray(vector<int>& nums, int a, int b, int c) {
        
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            
                ans.push_back(nums[i]*nums[i]*a+nums[i]*b+c);
                
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};