class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
  
            unordered_map<int,int>gzip;
        
            for(int i=0;i<nums.size();i++){
                    gzip[nums[i]*2]=i;
            }
        
        
            int cnt=0;
            
           for(int i=0;i<nums.size();i++){
               for(int j=i+1;j<nums.size();j++){
                            int idx=gzip[(nums[i]+nums[j])];
                            if(gzip.find((nums[i]+nums[j]))!=gzip.end()){
                                            if(i<gzip[(nums[i]+nums[j])] and gzip[(nums[i]+nums[j])]<j and 
                                                  nums[idx]-nums[i]==diff and nums[j]-nums[idx]==diff  ){
                                                    cout<<i<<gzip[(nums[i]+nums[j])]<<j<<endl;
                                                    cnt++;
                                            }        
                                
                            }
               
               
               
               }
               
               
               
           }
            
            return cnt;
        
        
    }
};