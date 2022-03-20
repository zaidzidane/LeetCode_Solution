class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        bool val=true;
        int flag=1;
        for(int i=1;i<nums.size();i++){
                    if(nums[i]-nums[i-1]==0 and flag){
                             continue;      
                    }  
                    else if(flag==1){
                            val=nums[i]-nums[i-1]>0?true:false;
                            flag=0;
                    
                    }
            
                    else{
                        
                            if(val){
                                
                                    if(nums[i]-nums[i-1]>=0){
                                            
                                                continue;
                                    }
                                    else{
                                            
                                                return  false;
                                        
                                            
                                    }
                                
                                
                            }
                        
                        
                            if(!val){
                                
                                    if(nums[i]-nums[i-1]<=0){
                                            
                                                continue;
                                    }
                                    else{
                                            
                                                return  false;
                                        
                                            
                                    }
                                
                                
                            }
                           
                        
                    }
            
        }
        
        
            return true;
        
    }
};