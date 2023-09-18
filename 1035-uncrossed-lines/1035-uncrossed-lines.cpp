class Solution {
public:
    
    int dfs(vector<int>&nums1,vector<int>&nums2,vector<vector<int>>&dp,int i,int j){
     
            if(i>=nums1.size() or j>=nums2.size()){
                    return 0;
            }
        
            if(dp[i][j]!=-1){
                    return dp[i][j];
            }
            if(nums1[i]==nums2[j]){
                
                    return dp[i][j]=1+dfs(nums1,nums2,dp,i+1,j+1); 
            }
        
            return dp[i][j]=max(dfs(nums1,nums2,dp,i,j+1),dfs(nums1,nums2,dp,i+1,j));
        
        
        
    }
    
    
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        
            vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(),-1));
            int i=0;
            int j=0;
            return dfs(nums1,nums2,dp,i,j);
        
        
    }
};