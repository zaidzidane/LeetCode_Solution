class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        vector<int>prefix;
        prefix.push_back(0);
       
        for(int i=0;i<nums.size();i++){
                prefix.push_back(nums[i]+prefix[i]);
        }
        
        for(int i=0;i<prefix.size();i++){
                    cout<<prefix[i]<<endl;
        }
        
        
        unordered_map<int,int>gzip;
        int cnt=0;
        for(int i=0;i<prefix.size();i++){
                
                if(gzip.count(prefix[i]-k)!=0){
                    
                        cnt+=gzip[prefix[i]-k];
                        
                }
           
                    gzip[prefix[i]]+=1;  
                    
                    
                
            
        }
        
        return cnt;
    }
};