class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        if(nums.size()<=2) return true;
    
        bool flag=false;
        bool val=false;
        for(int i=1;i<nums.size();i++){   
            
                if(flag==false and nums[i]!=nums[i-1]){
                        val=nums[i]>nums[i-1]?true:false;
                        flag=true;
                        continue;
                }      
            
                if(nums[i]==nums[i-1]){
                        continue;
                }
                int v=nums[i]>nums[i-1]?true:false;
                if(val!=v){
                    
                        return false;
                    
                }
            
        }
        
        return true;
        
    }
};