class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int,vector<vector<int>>>gzip;
        
        if(points.size()==k){
            
            return points;
        }
        
        for(int i=0;i<points.size();i++){
            
                    int val=pow(points[i][0],2)+pow(points[i][1],2);
                    gzip[val].push_back(points[i]);
                    
                    pq.push(val);
            
        }
        
        vector<vector<int>>ans;
        while(k>0){
            
                for(int i=0;i<gzip[pq.top()].size();i++){
                    
                        ans.push_back(gzip[pq.top()][i]);
                        k--;
                    
                }
                pq.pop();
                
            
        }        
        
        return ans;
        
    }
};