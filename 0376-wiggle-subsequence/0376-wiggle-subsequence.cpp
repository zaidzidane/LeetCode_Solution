class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>up(n);
        vector<int>down(n);
        up[0]=1;
        down[0]=1;
        for(int i=1;i<nums.size();i++){
            
                if(nums[i]>nums[i-1]){
                    
                        up[i]=down[i-1]+1;  
                        down[i]=down[i-1];
                    
                }
            
                else if(nums[i-1]>nums[i]){
                    
                        down[i]=up[i-1]+1;
                        up[i]=up[i-1];
                        
                }
            
                else{
                    
                        up[i]=up[i-1];
                        down[i]=down[i-1];
                    
                }
            
            
        }
                
        int maxim=INT_MIN;
        for(int i=0;i<n;i++){
            
                maxim=max({up[i],down[i],maxim});
            
        }
        
        return maxim;
        
    }
};