class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
               
                unordered_map<int,int>gzip;
                gzip[0]=1;
                int sum=0;
                int ans=0;
                for(int i=0;i<nums.size();i++){
                    
                            sum+=nums[i];
                            if(gzip.find(sum-k)!=gzip.end()){
                                    ans+=gzip[sum-k];
                            }
                            
                            gzip[sum]++;
                }
        
                return ans;     
           
    }
};