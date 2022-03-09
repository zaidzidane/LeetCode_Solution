class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        
                for(int i=0;i<nums.size()-1;i++){
                        if(k>(nums[i+1]-nums[i]-1)){
                                
                                k-=nums[i+1]-nums[i]-1;
                                    
                        }
                        else{
                                
                                return nums[i]+k;
                                    
                        }
                    
                }
                
                return nums.back()+k;
        
    }
};