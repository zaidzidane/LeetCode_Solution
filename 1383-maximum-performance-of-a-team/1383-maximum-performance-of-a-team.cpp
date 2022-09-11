bool compare(vector<int>a,vector<int>b){
    
        return a[0]>b[0];    
    
    
}

class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        
                
            vector<vector<int>>items;
            for(int i=0;i<speed.size();i++)
            {
                        items.push_back({efficiency[i],speed[i]});
            }
        
            sort(items.begin(),items.end(),compare);
        
         
            long sum=0;
            long res=0;
            priority_queue<int,vector<int>,greater<int>>pq;
           for(auto item:items){
               
                pq.push(item[1]);   
                sum+=item[1];
                if(pq.size()>k){
                    sum-=pq.top();
                    pq.pop();
                }
               
               res=max(res,sum*item[0]);
           }
            
            return res%(int)(1e9+7);
    }
};