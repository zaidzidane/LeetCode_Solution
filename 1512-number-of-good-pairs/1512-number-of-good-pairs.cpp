class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
                int num=0;
                unordered_map<int,int>gzip;
                for(int i=0;i<nums.size();i++){
                            if(gzip[nums[i]]!=0){                             
                                        num+=gzip[nums[i]];
                                        gzip[nums[i]]+=1;
                            }
                        else{
                                    gzip[nums[i]]=1;
                                    
                        }
                        
                }
        
                return num;
    }
};