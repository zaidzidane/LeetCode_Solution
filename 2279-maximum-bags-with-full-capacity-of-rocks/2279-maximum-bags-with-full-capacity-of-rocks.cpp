class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<rocks.size();i++){
            
            pq.push(capacity[i]-rocks[i]);
            
            
        }
        
        int cnt=0;
        while(!pq.empty() and additionalRocks>0){
            
                   additionalRocks-=pq.top();
                   cnt++;
                   pq.pop();
            
        }
        
        if(additionalRocks<0){
            
                cnt--;
            
        }
        
        
        return cnt;
        
    }
};