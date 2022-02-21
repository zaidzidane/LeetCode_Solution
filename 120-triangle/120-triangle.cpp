class Solution {
public:
    
    
  
    int dfs(vector<vector<int>>&triangle,vector<vector<int>>&dp,int start,int index,int end){
            
            if(start>end){
                    return 0;
            }
        
            if(index<0 or index>end)
                    return INT_MAX;
        
            else{
                if(dp[start][index]!=INT_MAX){
                        return dp[start][index];
                }
                
                    int val1=dfs(triangle,dp,start+1,index,end);
                    int val2=dfs(triangle,dp,start+1,index+1,end);
                
                
                    //cout<<val1<<'\t'<<val2<<endl;
                    dp[start][index]=min(val1,val2)+triangle[start][index];
    
            }
        
            return dp[start][index];
                
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
        int start=0;
        int end=triangle.size()-1;
        int index=0;
        int sum=0;
        vector<vector<int>>dp(end+1,vector<int>(triangle[end].size(),INT_MAX));
        return dfs(triangle,dp,start,index,end);
        
        
    }
};