class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=0;
        int j=0;
        
        while(j<t.length() and i<s.length()){
                
                if(s[i]==t[j]){
                        i++;
                        j++;
                }
                else{
                        j++;
                }
            
        }
        
        
        if(i==s.length()){
                
                return true;
        }
        
        if(j==t.length()){
                return false;
        }    
        

        return true;
    }
};