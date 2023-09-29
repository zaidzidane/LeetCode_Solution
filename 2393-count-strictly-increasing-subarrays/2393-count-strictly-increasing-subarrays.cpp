class Solution {
public:
    long long countSubarrays(vector<int>& nums) {
        
            if(nums.size()==1){
                    return 1;
            }    
            int i=0;
            int j=0;
            long long int cnt=0;
        
            while(j<nums.size()-1)
            {    
                   if(nums[j]>=nums[j+1]){
                            // cout<<i<<"\t"<<j<<endl;
                            long long int val=(j-i+1);
                            if(val%2){
                                    long long int k=(val+1)/2;
                                    cnt+=(val)*k;
                                
                            }
                            else{
                                long long int k=(val)/2;   
                                cnt+=(val+1)*k;
                            }
                        
                            i=j+1;
                           
                    }
                    
                    j++;
            }
        
            // cout<<cnt<<endl;
            // cout<<i<<"\t"<<j<<endl;
            
            long long int val=(j-i+1);
                            if(val%2){
                                    long long int k=(val+1)/2;
                                    cnt+=(val)*k;
                                
                            }
                            else{
                                long long int k=(val)/2;   
                                cnt+=(val+1)*k;
                            }
                        

            
            return cnt;
        
    }
};