class KthLargest {
public:
    
    priority_queue<int,vector<int>,greater<int>>pq;
    int cnt;
    
    KthLargest(int k, vector<int>& nums) {
        
            cnt=k;
            for(auto num:nums){
                
                        if(pq.size()<k){
                                
                                pq.push(num);
                        }
                        else{
                            
                                if(pq.top()<num){
                                    
                                        pq.pop();
                                        pq.push(num);
                                    
                                }    
                            
                        }
            }
        
            
    }
    
    int add(int val) {
        
             if(pq.size()<cnt){
                                
                    pq.push(val);
                    return pq.top();
            }
        
        
            if(pq.top()<val){

                pq.pop();
                pq.push(val);

            }    
            
            return pq.top();
    }
};