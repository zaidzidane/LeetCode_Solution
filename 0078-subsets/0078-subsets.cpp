class Solution {
public:
    
    vector<vector<int>>ans;
    void allsubs(vector<int>current,vector<int>&nums,int i){
        
            if(i==nums.size()){
                    ans.push_back(current);
                
            }
            else{
                current.push_back(nums[i]);
                allsubs(current,nums,i+1);
                current.pop_back();
                allsubs(current,nums,i+1);
            }
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        allsubs(temp,nums,0);
        return ans;
        
    }
};