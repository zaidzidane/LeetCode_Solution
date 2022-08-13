class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        
            sort(nums.begin(),nums.end());
        
        
            for(int i=0;i<nums.size();i++){
                
                    cout<<nums[i]<<"\t";
                
            }
            
           
            int i=0;
            int j=nums.size()-1;
            int closest=INT_MAX;
            while(i<j){
                   
                    if((k-(nums[i]+nums[j])>0) and k-(nums[i]+nums[j])<closest){
                            
                                closest=k-(nums[i]+nums[j]);
                                i++;
                        
                    }
                
                    else if((k-(nums[i]+nums[j])<=0)){
                        
                                j--;
                        
                    }
                    else{
                                i++;
                        
                        
                    }
                    
                    
                
            }
            
         
        
            return (k-closest)<0?-1:k-closest;
        
    }
};