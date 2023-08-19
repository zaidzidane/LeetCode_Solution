class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        map<int,int>gzip;
        for(int i=0;i<nums.size();i++){
                
                gzip[nums[i]]=1;
                
        }
        
        int maxim=0;
        for(auto item:gzip){
            
                if(gzip.find(item.first-1)!=gzip.end()){
                    
                        gzip[item.first]=gzip[item.first-1]+1;
                }
               
                maxim=max(maxim,gzip[item.first]);
        }
        
        
        return maxim;
        
    }
};