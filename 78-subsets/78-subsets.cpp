class Solution {
public:
    
    vector<vector<int>>ans;
    
    
    void backtrack(vector<int>&nums,vector<int>row,int start){
        
                if(nums.size()<=start){ 
                    
                        ans.push_back(row);
                        return;
                }
        
               
                backtrack(nums,row,start+1);
                row.push_back(nums[start]);
                backtrack(nums,row,start+1);
                
            
    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int start=0;
        vector<int>row;
        backtrack(nums,row,start);
        return ans;
        
    }
};