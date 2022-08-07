class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
            int total=0;
            for(int i=0;i<nums.size();i++){
                    total+=nums[i];
            }
            int currentsum=0;
            for(int i=0;i<nums.size();i++){
                
                        if(currentsum==(total-nums[i])){
                                
                                    return i;
                        } 
                        else{
                                
                                    currentsum+=nums[i];
                                    total-=nums[i];
                        }
                
            }
        
            return -1;
            
        
        
        
    }
};