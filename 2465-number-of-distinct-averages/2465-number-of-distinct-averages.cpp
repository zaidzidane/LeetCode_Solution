class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
            sort(nums.begin(),nums.end());
            set<float>s;
            
            int i=0;
            int j=nums.size()-1;
            while(i<j){
                    // cout<<(nums[i]+nums[j])/2<<endl;
                    s.insert((nums[i]+nums[j])/2.0);
                    i++;
                    j--;
            }
            
        
            return s.size();
    }
};