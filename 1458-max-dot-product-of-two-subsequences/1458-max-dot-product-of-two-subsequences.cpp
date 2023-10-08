class Solution {
public:
    
    
    int dfs(vector<int>&nums1,vector<int>&nums2,int i,int j,vector<vector<int>>&dp)
    {
        
        if(i>=nums1.size() or j>=nums2.size()){
                return 0;
        }
      
        if(dp[i][j]!=0){  
                return dp[i][j];
        }
        
        return dp[i][j]=max({dfs(nums1,nums2,i+1,j+1,dp)+(nums1[i]*nums2[j]),
                             dfs(nums1,nums2,i,j+1,dp),
                             dfs(nums1,nums2,i+1,j,dp),
                            });
     
        
    }
    
    
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        
        int i=0;
        int j=0;
        int firstMax=INT_MIN;
        int secondMax=INT_MIN;
        int firstMin=INT_MAX;
        int secondMin=INT_MAX;
        
        for(auto num:nums1){
                firstMax=max(firstMax,num);
                firstMin=min(firstMin,num);   
        }
        
        
        for(auto num:nums2){
                secondMax=max(secondMax,num);
                secondMin=min(secondMin,num);   
        }
        
        
        if(firstMax<0 and secondMin>0){
            
                return firstMax*secondMin;
            
        }
        
        
         if(secondMax<0 and firstMin>0){
            
                return secondMax*firstMin;
            
        }
        
        vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(),0));
        return dfs(nums1,nums2,i,j,dp);
        
        
    }
};