class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
            if(nums.size()==0){
                    return vector<string>();
            }
        
            vector<string>ans;
            int start=nums[0];
            for(int i=0;i<nums.size()-1;i++){
                    if(nums[i]!=nums[i+1]){
                            long long val=nums[i+1];
                            val-=nums[i];
                            if(val!=1)
                            {       
                                    if(start!=nums[i])
                                        ans.push_back(to_string(start)+"->"+to_string(nums[i]));
                                    else
                                        ans.push_back(to_string(start));
                                    
                                    start=nums[i+1];            
                            } 
                    }
            }

            if(start==nums.back()){
                     ans.push_back(to_string(start));        
            }
            else{
                    ans.push_back(to_string(start)+"->"+to_string(nums.back()));
                
            }
            
        
            
        
        return ans;
    }
};