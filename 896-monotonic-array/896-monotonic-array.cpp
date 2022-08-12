class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        
            vector<int>ans;
            for(int i=1;i<nums.size();i++){
                        ans.push_back(nums[i]-nums[i-1]);
            }
            
            int flag=-1;
            for(int i=0;i<ans.size();i++){
                
                       
                        if(ans[i]==0){
                                continue;
                        }
                
                        if(ans[i]>0 and (flag==-1 or flag==1) ){
                                    flag=1;
                                    continue;
                            
                        }
                         if(ans[i]<0 and (flag==-1 or flag==0) ){
                                    flag=0;
                                    continue;
                        }
                
                        else{
                                
                                    return false;
                            
                            
                        }
                
                
                
            }
        
            return true;
        
        
    }
};