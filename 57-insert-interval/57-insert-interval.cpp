class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        
                if(!intervals.size()){
                    
                        return {newInterval};
                }
                int i=0;
                vector<vector<int>>ans;
                while(i<intervals.size()){
                            if(newInterval[0]>intervals[i][0]){
                                        ans.push_back(intervals[i]);
                                        i++;
                                
                            }
                                    
                            else{
                                
                                    break;
                                
                            }
                    
                }
        
                if(ans.size()==0){
                    
                        ans.push_back({newInterval});
                    
                }
                
                else {
                    
                            if(ans.back()[1]>=newInterval[0] and ans.back()[1]<newInterval[1]){
                                        vector<int>val=ans.back();
                                        ans.pop_back();
                                        ans.push_back({val[0],newInterval[1]});

                             }
                    
                            else if(ans.back()[1]<newInterval[0]){
                                    
                                
                                          ans.push_back({newInterval});
                                
                            }
                    
                    
                }
        
        
                while(i<intervals.size()){
                    
                            vector<int>val=ans.back();
                            if(val[1]<intervals[i][0]){
                                
                                        ans.push_back(intervals[i]);
                                
                            }
                    
                            else{
                                
                                        if(val[1]<intervals[i][1]){
                                                    ans.pop_back();
                                                    ans.push_back({val[0],intervals[i][1]});
                                            
                                        }
                                      
                                
                                
                            }
                        
                    
                            i+=1;
                    
                    
                    
                }
        
        
                return ans;
        
        
    }
};