class HitCounter {
public:
   
    unordered_map<int,int>gzip;
    HitCounter() {
        
    }
    
    void hit(int timestamp) {
        
                if(gzip.find(timestamp)==gzip.end()){
                    gzip[timestamp]=1;
                }
                else{
                    
                        gzip[timestamp]+=1;
                }
    }
    
    int getHits(int timestamp) {
        
            int cnt=0;
            for(int i=timestamp;i>timestamp-300;i--){
                
                        if(gzip.find(i)!=gzip.end()){
                            
                                cnt+=gzip[i];
                            
                        }
                
                
            }
        
            return cnt;
    }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */ 