class Solution {
public:
    
    
    
    
    int minCost(vector<vector<int>>& costs) {
        
    
         vector<vector<int>>dp(costs[0].size(),vector<int>(costs.size(),INT_MAX));
         
        
         dp[0][0]=costs[0][0];
         dp[1][0]=costs[0][1];
         dp[2][0]=costs[0][2];
        
        
       
         for(int i=1;i<costs.size();i++){
             
                dp[0][i]=min(dp[1][i-1],dp[2][i-1])+costs[i][0];
                dp[1][i]=min(dp[0][i-1],dp[2][i-1])+costs[i][1];
                dp[2][i]=min(dp[0][i-1],dp[1][i-1])+costs[i][2];
                
         }
        
//         for(int i=0;i<costs.size();i++){
//             for(int j=0;j<costs.size();j++){
                    
//                         cout<<dp[i][j]<<"\t";
//             }
            
//                         cout<<endl;
//         }
       
         return min({dp[0][costs.size()-1],dp[1][costs.size()-1],dp[2][costs.size()-1]});
        
        
    }
};