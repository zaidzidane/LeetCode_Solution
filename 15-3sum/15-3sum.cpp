class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
                    sort(nums.begin(),nums.end());
                
                    set<vector<int>>ans;
                    for(int i=0;i<nums.size();i++){
                                // cout<<nums[i];
                                int j=i+1;
                                int k=nums.size()-1;
                                while(j<k){
                                // cout<<j<<"\t"<<k<<endl;
                                if(nums[i]+nums[j]+nums[k]==0){
                                    
                                            ans.insert({nums[i],nums[j],nums[k]}); 
                                            k--;
                                            j++;
                                }
                                else if((nums[i]+nums[j]+nums[k])>0){
                                        
                                                k--;
                                    
                                }
                                else{
                                        
                                                j++;
                                }
                        
                    }
                        
                    }
        
                   
                    return vector<vector<int>>(ans.begin(), ans.end());;
        
    }
};