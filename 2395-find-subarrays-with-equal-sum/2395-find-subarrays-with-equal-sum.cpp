class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
            unordered_map<int,bool>gzip;
        
            int i=0;
            while(i<nums.size()-1){
                
                    if(gzip.find(nums[i]+nums[i+1])!=gzip.end() and gzip[nums[i]+nums[i+1]]){
                                cout<<nums[i]+nums[i+1];
                                return true;
                        
                        
                    }             
                
                    else       gzip[nums[i]+nums[i+1]]=true;
                
                    i+=1;
                
            }
        
            return false;
    }
};