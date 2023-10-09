class LRUCache {
public:
    
    list<pair<int,int>>l1;
    unordered_map<int,list<pair<int,int>>::iterator>gzip;
    int cap=0;
    LRUCache(int capacity) {  
        cap=capacity;
    }
    
    int get(int key) {
        
        if(gzip.find(key)==gzip.end()){
               return -1; 
        }
        
        l1.splice(l1.begin(),l1,gzip[key]);
        return gzip[key]->second;
        
    }
    
    void put(int key, int value) {
        
        if(gzip.find(key)!=gzip.end()){
                gzip[key]->second=value;
                l1.splice(l1.begin(),l1,gzip[key]);
                return;
        }
        
        if(l1.size()==cap){
                int keydel=l1.back().first;
                l1.pop_back();
                gzip.erase(keydel);
        }
        
        l1.emplace_front(key,value);
        gzip[key]=l1.begin();
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */