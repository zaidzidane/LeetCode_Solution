class Solution {
public:
    
    vector<vector<int>>val;
    void backtrack(vector<int>nums,vector<int>a,int start,int end){
        
            if(start==end){
                    val.push_back(a);
                    return;
            }
            else{
                
                    a.push_back(nums[start]);
                    backtrack(nums,a,start+1,end);
                    a.pop_back();
                    backtrack(nums,a,start+1,end);
                   
                
                
            }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
     
            int start=0;
            int end=nums.size();
            vector<int>a;
            backtrack(nums,a,start,end);   
            return val;
    }
};