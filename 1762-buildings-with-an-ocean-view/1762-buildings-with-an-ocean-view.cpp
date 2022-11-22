class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        
        stack<int>s;
        
        for(int i=0;i<heights.size();i++){
            
                if(s.empty()){
                    
                        s.push(i);
                        continue;
                    
                }
                while(!s.empty() and heights[s.top()]<=heights[i]){
                    
                       s.pop();    
                }
                s.push(i);
            
        }
        
        
        vector<int>ans;
        while(!s.empty()){    
                ans.push_back(s.top());
                s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};