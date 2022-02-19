class HitCounter {
public:
    
    
    vector<int>ans;
    HitCounter() {
             
        
    }
    
    
    void hit(int timestamp) {
        
         ans.push_back(timestamp);
        
        
    }
    
    int getHits(int timestamp) {
        
        int cnt=0;
        for(int i=0;i<ans.size();i++){
                
                if(ans[i]>timestamp-300){
                        cnt++;
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