

class Solution {
public:
    
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        
            sort(properties.begin(), properties.end(), 
             [](const vector<int>& a, vector<int>& b) -> bool { 
                 return (a[0] == b[0] ? a[1] > b[1] : a[0] < b[0]);});
         
        
            
            int cnt=0;
            int max_defence=0;
            for(int i=properties.size()-1;i>=0;i--){
                
                        if(properties[i][1]<max_defence){
                                   
                                    cnt+=1;
                            
                        }        
                
                        max_defence=max(max_defence,properties[i][1]);
                        
                
            }
        
        
        
            return cnt;

    }
};