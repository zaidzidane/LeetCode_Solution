class Solution {
public:
    
//     int binary_left(vector<int>&nums,int lower,int start){
        
//             int left=start;
//             int right=nums.size()-1;
//             int flag=false;
//             while(left<=right){
                    
//                     //cout<<left<<"\t"<<right<<endl;
//                     int mid=left+(right-left)/2;
                
//                     if(nums[mid]+nums[start]>=lower){
                        
//                                 right=mid-1;
//                                 flag=true;
                        
//                     }
//                     else{
                        
//                                 left=mid+1;
                            
//                     }
                
//             }
    
//                return nums[right]+nums[start]>=lower?right+1:-1;
        
//     }
    
    
//     int binary_right(vector<int>&nums,int right,int end){
        
//             int left=start;
//             int right=nums.size()-1;
//             int flag=false;
//             while(left<=right){
                    
//                     //cout<<left<<"\t"<<right<<endl;
//                     int mid=left+(right-left)/2;
                
//                     if(nums[mid]+nums[start]>=lower){
                        
//                                 right=mid-1;
//                                 flag=true;
                        
//                     }
//                     else{
                        
//                                 left=mid+1;
                            
//                     }
                
//             }
    
//                return right==start and !flag?-1:right+1;
        
//     }
    
    
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        
            sort(nums.begin(),nums.end());
       
            long long cnt=0;
            for(int i=0;i<nums.size();i++){
                   
                    vector<int>::iterator left,right;
                     left=lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i]);
                     right=upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i]);
                     cnt+=(right-left);
                     //cout<<right-left;
                         
                     
                        
                
            }
        
            return cnt;
        
    }
};