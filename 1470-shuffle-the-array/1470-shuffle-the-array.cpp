class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
            int mid=nums.size()/2;
            int i=0;
            int j=i+mid;
            int k=0;
            vector<int>ans(nums.size(),-1);
            while(j<nums.size() and k<nums.size()){
                    
                    ans[k]=nums[i];
                    ans[k+1]=nums[j];
                    k+=2;
                    j++;
                    i++;
            }
            
            return ans;
    }
};