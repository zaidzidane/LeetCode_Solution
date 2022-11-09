class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
            
     sort(points.begin(),points.end());
            
    vector<vector<int>>ans;
        
        for(int i=0;i<points.size();i++){
            
                if(!ans.size()){
                        
                        ans.push_back(points[i]);
                }
            
                else{
                    
                        if(ans.back()[1]>=points[i][0] and ans.back()[1]<=points[i][1]){
                            
                                            int x=points[i][0];
                                            int y=ans.back()[1];;
                                            ans.pop_back();
                                            ans.push_back({x,y});
                            
                        }
                        
                        else if( ans.back()[1]>points[i][1]){
                    
                                    ans.pop_back();
                                    ans.push_back(points[i]);
                                   
                            
                            
                        }
                        else
                            
                                ans.push_back(points[i]);
                    
                }
            
        }
        
        
        return ans.size();
            
    }
};