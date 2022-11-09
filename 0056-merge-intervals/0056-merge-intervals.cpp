class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
            sort(intervals.begin(),intervals.end());
        
            vector<vector<int>>ans;
            
            for(int i=0;i<intervals.size();i++){
                
                        if(ans.size()==0){
                            
                                ans.push_back(intervals[i]);
                            
                        }
                
                        else{
                            
                                    
                                if(ans.back()[1]>=intervals[i][1]){
                                    
                                            continue;
                                    
                                }
                            
                                else if(ans.back()[1]<intervals[i][0]){
                                        
                                            ans.push_back(intervals[i]);
                                }
                            
                                else if(ans.back()[1]>=intervals[i][0] and ans.back()[1]<intervals[i][1]){
                                    
                                            int x=ans.back()[0];
                                            int y=intervals[i][1];
                                            ans.pop_back();
                                            ans.push_back({x,y});
                                    
                                }
                            
                        }
                
            }
                        return ans;
                
            
        
        
        
    }
};