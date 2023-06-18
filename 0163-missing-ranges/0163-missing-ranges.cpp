class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        
             vector<vector<int>>ans;
            if(!nums.size()){
                      
                    return {{lower,upper}};
            }
            
            
                
            if(nums[0]-lower>=1){

                    ans.push_back({lower,nums[0]-1});
            }
                   
                
            
        
        
           
            for(int i=1;i<nums.size();i++){
                
                    if(nums[i]-nums[i-1]==1){
                            continue;
                    }
                    else{
                        
                            ans.push_back({nums[i-1]+1,nums[i]-1});
                        
                    }
                
            }
        
            if(upper-nums[nums.size()-1]>=1){
                        
                        ans.push_back({nums[nums.size()-1]+1,upper});
            }
        
            return ans;
        
    }
};