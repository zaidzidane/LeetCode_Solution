class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
     
                
            vector<int>ans;
            int max=INT_MIN;
            for(int i=heights.size()-1;i>=0;i--){
                    if(heights[i]>max){
                                max=heights[i];
                                ans.push_back(i);
                    }
                    
            }
        
            reverse(ans.begin(),ans.end());
            return ans;
        
    }
};