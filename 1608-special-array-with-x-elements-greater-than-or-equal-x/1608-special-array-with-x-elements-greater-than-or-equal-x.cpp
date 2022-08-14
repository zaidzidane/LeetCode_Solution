class Solution {
public:
    
    
    int calculate(vector<int>&nums,int val){
        
            
            int cnt=0;
            for(int i=0;i<nums.size();i++){
                    if(val<=nums[i]){
                                    cnt+=1;
                        }
            }
        
            return cnt!=val?cnt>val?1:-1:0;
        
    }
    
    
    
    int specialArray(vector<int>& nums) {
        
            int start=0;
            int end=nums.size();
            
            while(start<=end){
                
                    cout<<start<<"\t"<<end<<endl;    
                    int mid=start+(end-start)/2;
                    if(calculate(nums,mid)==0){
                        
                                return mid;
                    }
                
                    else if(calculate(nums,mid)>0){
                                
                                start=mid+1;
                    }
                    
                    else{
                            
                                end=mid-1;
                    }
                
            }
            
           
        
            return -1;
            
        
    }
};