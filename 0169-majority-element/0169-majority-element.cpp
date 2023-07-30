class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
            int cnt=1;
            int temp = nums[0];
        
            for(int i=1;i<nums.size();i++){
                
                    if(temp!=nums[i]){
                        
                            cnt--;
                            if(cnt==0){
                                    
                                    temp=nums[i];
                                    cnt=1;
                            }
                        
                    }
                    else{
                        
                                cnt++;
                                
                        
                    }
                
                
            }
        
            return temp;
        
    }
};