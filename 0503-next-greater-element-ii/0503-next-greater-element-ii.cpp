class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int>s;
        int i=0;
        vector<int>ans(nums.size(),-1);
        while(i<2*nums.size()){
            
                while(!s.empty() and nums[s.top()]<nums[i%nums.size()] and (i%nums.size()!=s.top())){
                    
                            ans[s.top()]=nums[i%nums.size()];
                            s.pop();
                }
            
                if(i<nums.size())
                    s.push(i);
                i++;
            
        }
        
        
        return ans;
        
    }
};