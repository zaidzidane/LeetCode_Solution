class MyCalendar {
public:
    
    vector<vector<int>>intervals;
    MyCalendar() {
        
        
    }
    
    bool book(int start, int end) {
        
            if(intervals.size()==0){
                        intervals.push_back({start,end});
                        return true;
            }
        
        for(int i=0;i<intervals.size();i++){
                
        if((start>=intervals[i][0] and start<intervals[i][1])  or (end>intervals[i][0] and end<=intervals[i][1])){
                    cout<<intervals[i][0]<<"\t"<<intervals[i][1]<<endl;
                        return false;
        }
            
        if(start<=intervals[i][0] and end>=intervals[i][1]) return false;
            
            
                
                
        }
        
        intervals.push_back({start,end});
            
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */