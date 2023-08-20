bool compare(vector<int>v1,vector<int>v2){
            return v1[0]<v2[0]?true:(v1[0]==v2[0]?(v1[1]<v2[1]?true:false):false);
}


class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
            sort(points.begin(),points.end(),compare);
            vector<vector<int>>ans;
            //ans.push_back(points[0]);
            for(int i=0;i<points.size();i++){
                    if(ans.size()!=0 and points[i][0]<=ans.back()[1]){
                                if(points[i][1]>ans.back()[1]){
                                    int temp=ans.back()[1];
                                    ans.pop_back();
                                    ans.push_back({points[i][0],temp});
                                }
                                else{
                                        ans.pop_back();
                                        ans.push_back({points[i]});
                                }
                    }
                    else{
                        
                                ans.push_back(points[i]);
                        
                    }
                    
            }
        
                return ans.size();
        }
    
};