class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
//             vector<int>prefix;
//             prefix.push_back(nums[0]);
//             for(int i=1;i<nums.size();i++){
                
//                     prefix.push_back(nums[i]+prefix[i-1]);
//                     cout<<prefix[i]<<"\t";
                
//             }
        
        
        
            int sum=0;
            int max_sum=0;
            int max_elem=INT_MIN;
            for(int i=0;i<nums.size();i++){
                
                    sum+=nums[i];
                    if(sum<0){
                            sum=0;  
                    }         
                    
                    max_sum=max(sum,max_sum);
                    max_elem=max(max_elem,nums[i]);
                    
            
            }
        
            return max_elem<0?max_elem:max_sum;
        
    }
};