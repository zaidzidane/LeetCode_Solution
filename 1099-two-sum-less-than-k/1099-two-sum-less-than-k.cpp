class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int close=INT_MAX;
        int answer=-1;
        while(i<j){
            
                int sum=nums[i]+nums[j];
                if(sum<k){
                        
                        answer=max(answer,sum);
                        i++;
                }
                else{
                    
                        j--;
                    
                }
            
            
        }
        
        
        return answer;
        
    }
};