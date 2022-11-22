class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        
        stack<pair<int,int>>s;
        vector<int>ans(prices.size());
        for(int i=0;i<prices.size();i++){
            
                    if(s.empty()){
                        
                            s.push({prices[i],i});
                            continue;
                    }
            
                    while(!s.empty() and s.top().first>=prices[i]){
                        
                            auto temp=s.top();
                            ans[temp.second]=temp.first-prices[i];
                            s.pop();
                           
                        
                    }
                    
                     s.push({prices[i],i});
                    
            
        }
        
        while(!s.empty()){
                 auto temp=s.top();
                 ans[temp.second]=temp.first;
                 s.pop();
            
            
        }
        
        return ans;
    }
};