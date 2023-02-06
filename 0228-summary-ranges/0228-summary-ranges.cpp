class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
         
            sort(nums.begin(),nums.end());
            vector<string>ans;
            int start=0;
            int i=0;
            long long int val=0;
            while(i<nums.size()){

                    start=i;
                    
                    while(i<nums.size()-1 and nums[i+1]==nums[i]+1){
                           
                            
                              i++;
                        
                    }
                
                    if(start!=i)
                        ans.push_back(to_string(nums[start])+"->"+to_string(nums[i]));
                    else
                        ans.push_back(to_string(nums[i]));
                    
                   
                    i+=1;
                    
                    
            }
               
          
//             if(nums[i]-nums[i-1]==1){
                    
//                     ans.push_back(to_string(nums[start])+"->"+to_string(nums[i]));   
                
//             }
//             else{
                
//                      ans.push_back(to_string(nums[i]));  
                
//             }
            
            return ans;
            
    }
};