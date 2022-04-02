class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
            int n=nums.size();
            int total = 0;
            total=accumulate(nums.begin(), nums.end(), total);
            //cout<<total;
            if(total<target){
                    return 0;
            }
            
            int i=0;
            int j=0;
            int sum=0;
            int min_=nums.size();
            while(j<nums.size()){
                
                    if(sum>=target){
                                sum-=nums[i];
                                min_=min(min_,j-i);
                                i++;
                    }

                    else{
                        sum+=nums[j];
                       
                        j++;
                    }
            }
            
            while(sum-nums[i]>=target){
                    
                    sum-=nums[i];
                    min_--;
                    i++;
                        
                
            }    
            
            
            //cout<<i<<j;
            return min_;
        
    }
};