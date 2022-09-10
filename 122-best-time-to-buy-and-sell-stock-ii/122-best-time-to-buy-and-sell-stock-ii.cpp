class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
                vector<int>prefix;
                for(int i=1;i<prices.size();i++){
                    
                            prefix.push_back(prices[i]-prices[i-1]);
                    
                }
            
                int sum=0;
                for(int i=0;i<prefix.size();i++){
                    
                            if(prefix[i]<0){
                                
                                
                                    continue;
                                
                            }
                    
                            sum+=prefix[i];
                            
                }
        
                return sum;
        
    }
};