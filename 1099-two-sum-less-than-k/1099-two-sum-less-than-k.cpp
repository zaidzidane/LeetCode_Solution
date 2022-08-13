class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        
            sort(nums.begin(),nums.end());
        
        
            for(int i=0;i<nums.size();i++){
                
                    cout<<nums[i]<<"\t";
                
            }
            
            cout<<endl;
            int i=0;
            int j=nums.size()-1;
            int closest=INT_MAX;
            while(i<j){
                    cout<<i<<"\t"<<j<<endl;
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
            
            cout<<k-closest;
        
            return (k-closest)<0?-1:k-closest;
        
    }
};