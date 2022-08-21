class Solution {
public:
    
    vector<vector<int>>ans;
    
    void permutation(vector<int>&nums,int i){
        
                
            if(i>=nums.size()){
                    
                  ans.push_back(nums);
                  return;
                
            }
        
            for(int k=i;k<nums.size();k++){
                
                    swap(nums[i],nums[k]);
                    permutation(nums,i+1); 
                    swap(nums[k],nums[i]);
            }
            
            
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
            
                permutation(nums,0);
                return ans;
        
    }
};