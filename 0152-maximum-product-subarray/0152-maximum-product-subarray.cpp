class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
            int max_so_far=nums[0];
            int min_so_far=nums[0];
            int result =max_so_far;
        
            for(int i=1;i<nums.size();i++){
                 
                    if(nums[i]==0){
                        
                            max_so_far=0;
                            min_so_far=0;
                            result=max({max_so_far,min_so_far,result});
                            continue;
                        
                    }
                    
                
                    int temp_max=max({nums[i],nums[i]*max_so_far,nums[i]*min_so_far});
                    min_so_far=min({nums[i],nums[i]*min_so_far,nums[i]*max_so_far});
                    max_so_far=temp_max;
                    result=max({max_so_far,min_so_far,result});
                   
            }
        
            return result;
        
    }
};