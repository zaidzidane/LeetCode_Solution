class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
            for(int i=0;i<nums.size();i++){
                    
                    // cout<<nums[nums[i]]<<endl;
                    if(nums[abs(nums[i])]>0){
                            
                            nums[abs(nums[i])]*=-1;    
                        
                    }
                    else{
                        
                            return abs(nums[i]);
                        
                        
                    }
                        
                
            }
        
            return -1;
    }
};