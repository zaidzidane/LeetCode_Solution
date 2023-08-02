   void deleteit(vector<int>&nums,int idx){
        
        
        for(int i=idx+1;i<nums.size();i++){
            
                nums[i-1]=nums[i];
            
            
        }
        
    }


class Solution {
public:
        
    int removeDuplicates(vector<int>& nums) {
        
        int i=1;
        int count=1;
        int length=nums.size();
        
        while(i<length){
            
            if(nums[i]==nums[i-1]){
                
                count++;
                
                    if(count>2){
                            deleteit(nums,i);
                            i-=1; 
                            length-=1;
                    }
                
            }
            else{
                    
                        count=1;
                        
                    
                }
                
                i+=1;
            
        }
        
        return length;
            
    }
};