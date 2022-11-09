class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        
            sort(intervals.begin(),intervals.end());
            
            if(!intervals.size()) return true;
            
            int start=intervals[0][0];
            int end=intervals[0][1];
            
            int i=1;
            while(i<intervals.size()){
                
                        if(intervals[i][0]<end){
                                
                                    return false;
                        }
                
                        end=intervals[i][1];
                        i+=1;
                
                
            }
            
            return true;
        
        
    }
};  