class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
                sort(intervals.begin(),intervals.end());
                
                int i=1;
                vector<vector<int>>ans;
                ans.push_back(intervals[0]);
                while(i<intervals.size()){
                    
                            if(ans.back()[1]<intervals[i][0]){
                                
                                           
                                            ans.push_back(intervals[i]);
                            }
                    
                            else{
                                
                                            if(intervals[i][1]>ans.back()[1]){
                                                
                                                        
                                                        int start=ans.back()[0];
                                                        int end=intervals[i][1];
                                                        ans.pop_back();
                                                        ans.push_back({start,end});
                                                
                                            }    
                                    
                                
                            }
                            
                            i+=1;
                    
                    
                    
                }
                
                return ans;
    }
};