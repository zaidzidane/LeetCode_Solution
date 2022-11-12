class Solution {
public:
    
    int deleteAndEarn(vector<int>& nums) {
    
        unordered_map<int,int>gzip;
        int max_number=-1;
        for(int i=0;i<nums.size();i++){
            
                   gzip[nums[i]]+=nums[i]; 
                   max_number=max(max_number,nums[i]);
        }
        
        vector<int>v(max_number+3);
        
        for(int i=2;i<v.size();i++){
            
                v[i]=max(v[i-1],v[i-2]+gzip[i-2]);
            
        }
        
        int max_=0;
        for(int i=0;i<v.size();i++){
                        
                    cout<<i<<"\t"<<v[i]<<endl;
                    max_=max(max_,v[i]);
            
        }
        
        return max_;
    }
};