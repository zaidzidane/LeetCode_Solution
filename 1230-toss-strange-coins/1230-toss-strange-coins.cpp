class Solution {
public:

    
    double dfs(vector<double>&probs,int target,int index,vector<vector<double>>&dp){
        
           
            if(index==probs.size()){
                    return 1.0;
            }
        
            double ans=-1;
            
          
            if(dp[target][index]!=-1){
                    return dp[target][index];
            }
        
            
            if(target>0 and probs.size()-index>target)
                    ans=dfs(probs,target-1,index+1,dp)*probs[index]+dfs(probs,target,index+1,dp)*(1-probs[index]);
            
            else if(target==0)
                    ans=dfs(probs,target,index+1,dp)*(1-probs[index]);
        
            else if(target>0 and probs.size()-index==target){
                    ans=dfs(probs,target-1,index+1,dp)*probs[index];
                             
            }
        
        
                 
            return dp[target][index]=ans;
        
        
    }
    
    
    
    double probabilityOfHeads(vector<double>& prob, int target) {
        
            int n=prob.size();
                
            vector<vector<double>>dp(target+1,vector<double>(n,-1.0));
            if(prob.size()<target){
                    return -1.0;
            }
        
            return dfs(prob,target,0,dp);
        
        
    }
};