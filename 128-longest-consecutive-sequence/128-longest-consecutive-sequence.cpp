class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
            unordered_set<int>gzip;
            for(int i=0;i<nums.size();i++){
                        gzip.insert(nums[i]);                    
            }
            
            int largest_len=0;
            int cnt=0;
            for(auto num:nums){
                    int parent =num-1;
                    if(gzip.find(parent)==gzip.end()){
                            int next_no=num+1;
                            cnt=1;
                            while(gzip.find(next_no)!=gzip.end()){
                                        cnt+=1;
                                        next_no+=1;
                            }
                    }
                    
                    largest_len=max(largest_len,cnt);
                
            }
            
        return largest_len;
                
                
                
                
            
    }
};