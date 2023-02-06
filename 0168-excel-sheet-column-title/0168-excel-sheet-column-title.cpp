class Solution {
public:
    
    string convertToTitle(int columnNumber) {
    
            string ans="";
        
            while(columnNumber){
                
                        columnNumber-=1;
                        if(columnNumber<26){
                                
                                    ans+='A'+columnNumber;  
                                    reverse(ans.begin(),ans.end());
                                    return ans;
                        }
                
                        ans+='A'+columnNumber%26;
                        
                        columnNumber/=26;
                        
                
            }
        
            
            return ans;
        
        
    }
};