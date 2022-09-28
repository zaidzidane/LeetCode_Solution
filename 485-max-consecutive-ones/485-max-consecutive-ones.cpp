class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxim=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            
                if(nums[i]==1)
                            cnt++;
            
                else
                            cnt=0;
            
                maxim=max(maxim,cnt);
            
            
        }
        
        return maxim;
    }
};