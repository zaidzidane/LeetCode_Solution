class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
            sort(nums.begin(),nums.end());
            
            int i=0;
            int j=nums.size()-1;
            if(nums.size()<=2) return;
            vector<int>ans;
            while(i<j){
                
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    i++;
                    j--;
                
                
            }
        
            if(i==j)
                    ans.push_back(nums[i]);
            
        
            nums=ans;
        
    }
};