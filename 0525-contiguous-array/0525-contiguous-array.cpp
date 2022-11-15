class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
            int sum=0;
            int max_length=0;
            unordered_map<int,int>gzip;
            gzip[0]=-1;
           for(int i=0;i<nums.size();i++){
                        
                    sum+=nums[i]==0?-1:1;
                    
                    if(gzip.find(sum)!=gzip.end()){
                        
                             max_length=max(max_length,i-gzip[sum]);   
                        
                    }
                    else{
               
                        gzip[sum]=i; 
                    }
            }
        
            return max_length;
        
    }
};