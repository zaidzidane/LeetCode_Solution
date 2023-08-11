class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
            vector<int>prefix;
            prefix.push_back(0);
            for(int i=1;i<prices.size();i++){
                
                    prefix.push_back(prices[i]-prices[i-1]);
            }
        
        
            int total=0;
            int sum=0;
            for(int i=0;i<prefix.size();i++){
                
                    //cout<<prefix[i]<<endl;
                    if(prefix[i]<0){
                                total+=sum;
                                sum=0;
                           
                        
                    }
                    else{
                        
                            sum+=prefix[i];
                        
                    }
                
            }
        
            if(sum>0){
                    total+=sum;
            }
        
            return total;
        
    }
};