class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
            int cnt=0;
           
                for(int j=0;j<strs[0].size();j++){
                    for(int i=1;i<strs.size();i++){
                            if(strs[i-1][j]<=strs[i][j]){
                                
                                    continue;
                                
                            }
                            else{
                                
                                        cnt++;
                                        break;
                                
                            }
                    
                    
                    
                }        
                    
            }
        
        
            return cnt;
        
    }
};