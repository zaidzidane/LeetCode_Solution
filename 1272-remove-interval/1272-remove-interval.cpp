class Solution {
public:
    vector<vector<int>> removeInterval(vector<vector<int>>& intervals, vector<int>& toBeRemoved) {
            
            int i=0;
            vector<vector<int>>ans;
            while(i<intervals.size()){
                
                        if(intervals[i][1]<=toBeRemoved[0] and intervals[i][0]<=toBeRemoved[0]){

                                    ans.push_back(intervals[i]);
                            
                        }
                
                        else if(intervals[i][0]>=toBeRemoved[1] and intervals[i][1]>=toBeRemoved[1]){
                            
                                     ans.push_back(intervals[i]);
                            
                        }
                
                        else if(intervals[i][1]<=toBeRemoved[1] and intervals[i][0]<toBeRemoved[0]){
                            
                                    ans.push_back({intervals[i][0],toBeRemoved[0]});
                                    
                            
                        }
                
                        else if(intervals[i][0]>=toBeRemoved[0] and intervals[i][1]>toBeRemoved[1]){
                            
                                    ans.push_back({toBeRemoved[1],intervals[i][1]});
                            
                        }
                
                        else if(intervals[i][0]<toBeRemoved[0] and intervals[i][1]>toBeRemoved[1]){
                            
                                   
                                    ans.push_back({intervals[i][0],toBeRemoved[0]});
                                    ans.push_back({toBeRemoved[1],intervals[i][1]});
                        }
                
                      
                
                       i++;
                
            }
        

        
            
            return ans;
        
    }
};