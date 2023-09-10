class Solution {
public:
       
    
    int rob(vector<int>& nums) {
        
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        vector<int>mem(nums.size(),0);
        mem[0]=nums[0];
        mem[1]=nums[1];
        for(int i=2;i<n;i++){
                mem[i]=max(mem[i-1]-nums[i-1],mem[i-2])+nums[i]; 
        }
        
        
        
        return max(mem[n-1],mem[n-2]);
        
    }
};