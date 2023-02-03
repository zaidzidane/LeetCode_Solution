
class Solution {
public:
    
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(!k) return 0;
        int end=0;
        int product=1;
        int start=0;
        int cnt=0;
        
        while(end<nums.size()){
                //cout<<end<<endl;
                product*=nums[end];
                while( start<=end and product>=k){
                    product/=nums[start++];
                    continue;
                    
                }
                cnt+=end-start+1;
                end++;
        }
      
        
        return cnt;
    }
};