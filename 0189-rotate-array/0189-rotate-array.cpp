class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
            if(k>nums.size()){
                    
                    k%=nums.size();
                
            }
            vector<int>v(k,0);
            int n=nums.size();
            for(int i=0;i<k;i++){
                
                    v.push_back(nums[n-1-i]);
            }
            
            vector<int>ans;
            n=v.size();
            for(int i=0;i<k;i++){
                    cout<<v[n-1-i]<<endl;
                    ans.push_back(v[n-1-i]);
                
            }
                
            for(int i=0;i<nums.size()-k;i++){
                    cout<<nums[i];
                    ans.push_back(nums[i]);


            }
        
        
            nums=ans;
    }
};