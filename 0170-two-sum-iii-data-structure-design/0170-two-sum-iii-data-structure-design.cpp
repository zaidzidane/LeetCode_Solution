class TwoSum {
public:

    
    vector<int>v;
  
    TwoSum() {
        
    }
    
    void add(int number) {
        
       
        v.push_back(number);
        
    }
    
    bool find(int value) {
        
        int i=0;
        int j=v.size()-1;
         sort(v.begin(),v.end());
        while(i<j){
           
                if(v[i]+v[j]==value) return true;
            
                else if(v[i]+v[j]>value) j--;
            
                else    i++;
                        
        }
            
        return false;
        
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */