class Solution {
public:
    int findGCD(vector<int>& nums) {
            
                int minim=INT_MAX;
                int maxim=INT_MIN;
                for(int i=0;i<nums.size();i++){
                    
                            minim=min(minim,nums[i]);
                            maxim=max(maxim,nums[i]);
                    
                }
        
                
                
                for(int i=minim;i>=1;i--){
                            
                            if(maxim%i==0 and minim%i==0) return i;
                }
        
                return -1;
    }
};