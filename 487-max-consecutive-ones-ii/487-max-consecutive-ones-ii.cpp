class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
       
        int j=0;
        int zero=-1;
        int i=0;
        int maxim=0;
        
        while(j<nums.size()){
            
                if(nums[j]==0){

                        if(zero!=-1){
                            
                                i=zero+1;
                                
                        }
                       
                    
                        zero=j;
                }
            
                maxim=max(maxim,j-i+1);
                 j++;
            
        }
         maxim=max(maxim,j-i);
        return maxim;
        
    }
};