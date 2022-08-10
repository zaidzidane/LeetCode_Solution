class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
                unordered_map<int,int>gzip;
                
                for(int i=0;i<nums.size();i++){
                    
                                if(gzip.count(nums[i])==0){
                                        
                                            gzip[nums[i]]=1;
                                        
                                }
                                else{
                                        
                                    
                                                gzip[nums[i]]+=1;
                                }
                    
                    
                }
        
        
                int cnt=ceil(nums.size()/2.0);
                for(auto g:gzip){
                    
                            if(g.second>=cnt){
                                    
                                        return g.first;
                            }
                    
                }
        
                return -1;
        
    }
};