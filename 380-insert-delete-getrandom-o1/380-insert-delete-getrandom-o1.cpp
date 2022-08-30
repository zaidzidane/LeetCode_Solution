class RandomizedSet {
public:
    set<int>s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        
        if(s.find(val)==s.end()){
            
                s.insert(val);
                return true;
        }
        else
            
                return false;
    }
    
    bool remove(int val) {
        
        if(s.find(val)!=s.end()){
                
            s.erase(s.find(val));
            return true;
        }
        else{
            
            return false;
            
        }
        
    }
    
    int getRandom() {
        
        int random = rand() % s.size();
        cout<<random<<endl;
        return *next(s.begin(),random);;
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */