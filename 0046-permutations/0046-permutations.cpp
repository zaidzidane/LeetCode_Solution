class Solution {
public:
    
    vector<vector<int>>ans;
    void permutation(vector<int>&perm,vector<int>&nums){
        
            if(perm.size()>nums.size()){
                    return;
            }
            if(perm.size()==nums.size()){
                    ans.push_back(perm);
                    return;
            }    
            for(int i=0;i<nums.size();i++){
                   if(find(perm.begin(),perm.end(),nums[i])==perm.end()){
                            perm.push_back(nums[i]); 
                            permutation(perm,nums);
                            perm.pop_back();
                   }
            }    
        
        
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
            vector<int>perm;
            int i=0;
            int n=nums.size();
            permutation(perm,nums);
            return ans;
        
    }
};