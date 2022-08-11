class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
            vector<int>ans(nums.size(),0);
        
            int i=0;
            int j=nums.size()-1;
            int start=nums.size()-1;
            while(i<=j){
                    
                    if(abs(nums[j])-abs(nums[i])>0){
                            
                            ans[start]=nums[j]*nums[j];
                            j--;
                    } 
                    else{
                                ans[start]=nums[i]*nums[i];
                                i++;
                                
                    }
                    start--;
                
            }
            // ans[start]=nums[i]*nums[i];
        
            return ans;
        
    }
};