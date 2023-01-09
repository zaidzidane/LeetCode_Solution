class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
            int i=0;
            int j=0;
            int maxim=0;
            int flag=0;
            int flag_indx=-1;
            while(j<nums.size()){
                
                    if(nums[j]==0 and flag==0){
                            flag=1;
                            flag_indx=j;
                    }
                
                    else if(nums[j]==0 and flag==1){
                            
                            i=flag_indx+1;
                             flag_indx=j;
                    }
                
                    maxim=max(maxim,j-i+1);
                    j++;
                
            }
        
        
            return maxim;
    }
};