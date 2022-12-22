class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        
          priority_queue<int,vector<int>,greater<int>>pq(sticks.begin(),sticks.end());
          int sum=0;
          while(pq.size()>=2){
              
                  int val=pq.top();
                  pq.pop();
                  val+=pq.top();
                  pq.pop();
                  sum+=val;
                  pq.push(val);
                  val=0;
              
          }
        
        
          return sum;
            
          
            
    }
};