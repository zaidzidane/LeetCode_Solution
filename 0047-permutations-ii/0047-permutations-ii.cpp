class Solution {
public:
    
    set<vector<int>>ans;
    void permute(vector<int>perm,vector<int>&nums,vector<bool>&visited){
        
            if(perm.size()==nums.size()){
                    ans.insert(perm);
                    return;
            }
        
            if(perm.size()>nums.size()){
                    return;
            }
        
            
            for(int i=0;i<nums.size();i++){
                    if(!visited[i]){
                        
                            perm.push_back(nums[i]);
                            visited[i]=true;
                            permute(perm,nums,visited);
                            visited[i]=false;
                            perm.pop_back();
                        
                    
                    }
              
            }
            
        
        
        
    }
    

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
            vector<int>perm;
            vector<bool>visited(nums.size(),false);
            permute(perm,nums,visited);
        
            vector<vector<int>>a(ans.begin(),ans.end());
            return a;
        
        
        
        
    }
};