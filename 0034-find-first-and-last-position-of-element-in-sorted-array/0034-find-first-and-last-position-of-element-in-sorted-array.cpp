class Solution {
public:
    
    int checkleft(vector<int>&nums,int target){
        
    
            int left=0;
            int right=nums.size()-1;
        
            while(left<=right){
                
                        int mid=left+(right-left)/2;
                        
                        if(nums[mid]>=target){
                                    right=mid-1;    
                        }
                        else{
                                    left=mid+1;    
                        }
                        
            }
            
            return left<nums.size() and nums[left]==target?left:-1;
       
    }
    
    
        int checkright(vector<int>&nums,int target){
        
    
            int left=0;
            int right=nums.size()-1;
        
            while(left<=right){
                
                        int mid=left+(right-left)/2;
                        
                        if(nums[mid]>target){
                                    right=mid-1;    
                        }
                        else{
                                    left=mid+1;    
                        }
                        
            }
            
            return right>=0 and nums[right]==target?right:-1;
       
    }
    
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
            if(nums.size()==0){
                    return {-1,-1};
            }
        
           int left=checkleft(nums,target);
           int right=checkright(nums,target);
        
        
          return {left,right};
        
        
    }
};