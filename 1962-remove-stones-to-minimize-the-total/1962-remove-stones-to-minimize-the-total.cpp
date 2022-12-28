class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
            priority_queue<int>pq(piles.begin(),piles.end());
        
            while(k>0){
                    
                  
                    int val=pq.top()-floor(pq.top()/2);
                    pq.pop();
                    pq.push(val);
                    k--;
                
            }
            
            int sum=0;
            while(!pq.empty()){
                    //cout<<pq.top()<<endl;
                    sum+=pq.top();
                    pq.pop();
                
            }
        
            return sum;
    }
};