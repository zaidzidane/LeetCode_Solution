class BrowserHistory {
public:
    
    vector<string>v;
    int i=-1;
    BrowserHistory(string homepage) {
        
                v.push_back(homepage);
                i=0;
        
        
        
    }
    
    void visit(string url) {
        
                while(i<v.size()-1){
                    
                        v.pop_back();
                }
                v.push_back(url);
                i+=1;
        
    }
    
    string back(int steps) {
            
                if(steps>=i){
                    
                        i=0;
                }
                else{
                        i-=steps;
                }
                
                return v[i];
        
    }
    
    string forward(int steps) {
        
                
                if(i+steps>=v.size()-1){
                        i=v.size()-1;
                        return v[i];
                }
                
                    
                i+=steps;
                    
                
                return v[i];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */