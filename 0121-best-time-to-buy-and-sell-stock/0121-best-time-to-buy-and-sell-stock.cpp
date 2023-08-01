class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
            int n =prices.size();
            vector<int>prefix;
            prefix.push_back(0);
            for(int i=1;i<prices.size();i++){
                
                    prefix.push_back(prices[i]-prices[i-1]); 
                
            }
            
            int max_sum=0;
            int sum=0;
            for(int j=0;j<prices.size();j++){
                    
                    sum+=prefix[j];
                    if(sum<0){
                            sum=0;
                    }    
                    max_sum=max(max_sum,sum);
            }
            
            return max_sum;
                
        
        
    }
};