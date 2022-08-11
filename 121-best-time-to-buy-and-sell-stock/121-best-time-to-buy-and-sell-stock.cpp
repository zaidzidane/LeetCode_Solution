class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       
            vector<int>prefix;
            prefix.push_back(0);
            for(int i=1;i<prices.size();i++){
                        prefix.push_back(prices[i]-prices[i-1]); 
                     
            }
            
            int profit=0;
            int max_profit=0;
            for(int i=0;i<prefix.size();i++){
                        
                        profit+=prefix[i];
                        if(profit<0){
                                
                                    profit=0;
                            
                        }
                        
                        max_profit=max(max_profit,profit);
                        
                            
            }
            
            return max_profit;
            
        
        
    }
};