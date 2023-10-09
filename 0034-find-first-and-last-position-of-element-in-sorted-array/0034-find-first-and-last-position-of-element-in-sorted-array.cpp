int getfirst(vector<int>&nums,int target){
    
        int start=0;
        int end=nums.size()-1;
        
        while(start<=end){
                
                int mid=start+(end-start)/2;
                if(nums[mid]<target){
                        start=mid+1;
                }
                else{
                        end=mid-1;
                }   
        }
            
        if(start<nums.size() and nums[start]==target)
            return start;
    
        return -1;
}   



int getend(vector<int>&nums,int target){
    
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
                
                int mid=start+(end-start)/2;
                if(nums[mid]<=target){
                        start=mid+1;
                }
                else{
                        end=mid-1;
                }   
        }
            
        if(end>=0 and nums[end]==target)
            return end;
    
        return -1;
}







class Solution {
public:
    vector<int>searchRange(vector<int>& nums, int target) {
                    if(nums.size()==0) return {-1,-1};
                    int start=getfirst(nums,target);
                    return {getfirst(nums,target),getend(nums,target)};
        
        }
        
    
};