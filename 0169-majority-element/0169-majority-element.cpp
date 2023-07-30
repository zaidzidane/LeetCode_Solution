class Solution {
public:
    int majorityElement(vector<int>& nums) {
            
        int n=nums.size();
        int majority_element =0;
        int bit=1;
        
        for(int i=0;i<32;i++){
            
                // int bit_count = sum(bool(nums[i] & bit) for num in nums)
                bit = 1<<i; 
                int bit_count = 0;
                for(auto num : nums){
                        if(num& bit)
                                bit_count+=1;
                }
                //cout<<bit_count<<endl;
                if(bit_count > n/2){
                        majority_element+= bit;
                }    
                             
        }
        
        int cnt=0;
        for(auto num:nums){
            
                if(num<0){
                    
                        cnt+=1;
                }
        }
        
        int is_negative=0;
        if(cnt>n/2){
                is_negative=1;
        }
        
//         if (is_negative){
            
//                     majority_element-=bit;
//         }
            
        return majority_element;
        
        
    }
};