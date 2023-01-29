class Solution {
public:
    int minCostII(vector<vector<int>>& costs) {
        
        vector<vector<int>>dp(costs[0].size(),vector<int>(costs.size(),INT_MAX));
        
        
        for(int i=0;i<costs[0].size();i++){
            
                    dp[i][0]=costs[0][i];
                
        }
        
        
        for(int i=1;i<costs.size();i++){
                for(int j=0;j<costs[0].size();j++){
                            for(int i_=0;i_<costs[0].size();i_++){
                                        if(j!=i_){
                                                dp[j][i]=min(dp[j][i],dp[i_][i-1]+costs[i][j]);
                                        }
                            }
                }
        }
        
//         for(int i=0;i<dp.size();i++){
//                 for(int j=0;j<dp[0].size();j++){
                    
//                             cout<<dp[i][j]<<"\t";
//                 }
//                 cout<<endl;
//         }
        
        
        int minim=INT_MAX;
        for(int i=0;i<costs[0].size();i++){

            
                minim=min(minim,dp[i][costs.size()-1]);
            
            
        }
        
        return minim;
        
    }
};