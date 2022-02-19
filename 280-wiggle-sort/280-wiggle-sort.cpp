class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        if(nums.size()<=1){
                return;
        }
    
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        vector<int>ans;
        while(i<=j){
            
            if(i==j){
                    ans.push_back(nums[i]);
                    i++;
            }
            else{
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                i++;
                j--;
            }
            
        }    
        
        nums=ans;
        
        
    }
};