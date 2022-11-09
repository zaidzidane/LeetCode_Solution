class compare{
    
    public:
    bool operator()(vector<int>p,vector<int>q){
        
    
                return p[1]>q[1];
        
        
    }
    
};


class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        priority_queue<vector<int>,vector<vector<int>>,compare>pq;
        
        
        for(int i=0;i<intervals.size();i++){
            
                    if(pq.empty()){
                        
                            pq.push(intervals[i]);
                        
                    }
                
                    else{
                        
                            auto item=pq.top();
                            
                            if(item[1]<=intervals[i][0]){
                                
                                        int x=item[0];
                                        int y=intervals[i][1];
                                        pq.pop();
                                        pq.push({x,y});
                                    
                            }
                            else{
                                    
                                        pq.push(intervals[i]);
                                
                            }
                        
                    }
        }
        
        return pq.size();
        
    }
};