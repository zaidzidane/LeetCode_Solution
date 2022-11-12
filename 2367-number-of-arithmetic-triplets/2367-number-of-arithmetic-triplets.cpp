class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
            unordered_map<int,bool>gzip;
            
            for(int i=0;i<nums.size();i++){
                
                    gzip[nums[i]]=true;
                
            }
                
            int cnt=0;
            for(int i=0;i<nums.size();i++){
                
                    if(gzip.find(nums[i]+diff)!=gzip.end() and gzip.find(nums[i]-diff)!=gzip.end()){
                                    cnt+=1;             
                    }
            }
        
            return cnt;
        
    }
};