class SummaryRanges {
public:
    
    set<int>arr;
    
    SummaryRanges() {
       
        
        
    }
    
    void addNum(int value) {
            
            arr.insert(value);
            
    }
    
   
    
    vector<vector<int>> getIntervals() {
        
            int left=-1;
            int right=-1;
            
            vector<vector<int>>intervals;
            for(auto item:arr){
                
                    if(left<0){
                        
                            left=right=item;
                        
                    }
                    
                    else if(item==right+1){
                        
                            right=item;
                        
                    }
                    else{
                        
                            intervals.push_back({left,right});
                            left=right=item;
                        
                        
                    }
                
            }
        
            intervals.push_back({left,right});
            return intervals;
        
    }
    
    
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */