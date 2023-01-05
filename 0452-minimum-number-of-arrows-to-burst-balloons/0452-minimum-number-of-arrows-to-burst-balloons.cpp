
bool compare(vector<int>a,vector<int>b){
    
            if(a[0]<b[0]){
                    return true;
            }
            else if(a[0]==b[0]){
                
                    return a[1]<b[1];
            }
            else{
                
                    return false;
            }
}


class Solution {
    
public:
    
    int findMinArrowShots(vector<vector<int>>& points) {
        
            sort(points.begin(),points.end());
            vector<vector<int>>ans;
        
            int i=1;
            ans.push_back(points[0]);
        
            while(i<points.size()){
        
                    vector<int>q=ans.back();
                    if(points[i][0]<=q[1] and points[i][1]>=q[1]){
                        
                                vector<int>v({points[i][0],q[1]});
                                ans.pop_back();
                                ans.push_back(v);
                        
                    }
                    else if(points[i][1]<=q[1]){
                        
                               
                                ans.pop_back();
                                ans.push_back(points[i]);
                        
                    }
                    else{
                                ans.push_back(points[i]);
                        
                        
                    }
                
                
                    i+=1;
            }
        
            
            return ans.size();
            
        
        
    }
};