class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        
            unordered_map<int,int>gzip;
            vector<string>ans;
            int i=0;
            int n=nums.size()-1;
            if(nums.size()==0){
                
                 if(upper>=lower){
                
                    if(upper-lower==0){
                                
                                ans.push_back(to_string(upper));
                        }
                
                        else 
                                
                                ans.push_back(to_string(lower)+"->"+to_string(upper));
                               
            }
                
                
                return ans;  
            }
        
            if(nums[0]>lower){
                
                    if(nums[0]-lower==1){
                                
                                ans.push_back(to_string(lower));
                        }
                
                        else if(nums[0]-lower>1){
                                
                                ans.push_back(to_string(lower)+"->"+to_string(nums[0]-1));
                        }       
            }
        
            while(i<nums.size()-1){
                
                        if(nums[i+1]-nums[i]==2){
                                
                                ans.push_back(to_string(nums[i]+1));
                        }
                
                        else if(nums[i+1]-nums[i]>2){
                                
                                ans.push_back(to_string(nums[i]+1)+"->"+to_string(nums[i+1]-1));
                        }  
                
                        i++;
                    
                
            }
        
            if(nums[n]<upper){
                
                    if(upper-nums[n]==1){
                                
                                ans.push_back(to_string(nums[n]+1));
                        }
                
                        else if(upper-nums[n]>1){
                                
                                ans.push_back(to_string(nums[n]+1)+"->"+to_string(upper));
                        }  
                    
                
            }
        
            
        
            return ans;
    }
};