class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
            int zero=0;
            int non_zero=0;
        
            while(non_zero<nums.size()){
                
                    while(zero<nums.size() and nums[zero]!=0){
                            zero++;
                        
                    }
                
                    if(zero>=nums.size()){
                                cout<<"here";
                                break;
                    }

                
                    if(nums[non_zero]!=0 and non_zero>zero){
                        swap(nums[zero],nums[non_zero]);
                    }
                
                    non_zero++;
            } 
    }
};