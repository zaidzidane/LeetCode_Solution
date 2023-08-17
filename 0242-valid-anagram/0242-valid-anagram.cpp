class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
                vector<int>v1(26,0);
                 
        
                for(int i=0;i<s.size();i++){
                        v1[s[i]-'a']+=1;
                }
        
        
                for(int j=0;j<t.size();j++){
                        v1[t[j]-'a']-=1;
                }
            
                for(int i=0;i<26;i++){
                    
                        if(v1[i]!=0){
                            
                                    return false;
                            
                        }
                    
                }
        
                
                return true;
        
        
    }
};