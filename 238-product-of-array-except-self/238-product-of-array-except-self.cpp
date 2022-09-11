class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
            vector<int>left;
            vector<int>right;
            left.push_back(1);
            right.push_back(1);
            for(int i=0;i<nums.size();i++){
                
                    left.push_back(nums[i]*left[i]);
            }
        
             for(int i=nums.size()-1;i>=0;i--){
                
                    right.push_back(nums[i]*right[nums.size()-1-i]);
            }
        
            vector<int>ans;
        
            for(int i=0;i<nums.size();i++){
                
                    ans.push_back(left[i]*right[nums.size()-1-i]);
            }
        
            return ans;
            
    }
};