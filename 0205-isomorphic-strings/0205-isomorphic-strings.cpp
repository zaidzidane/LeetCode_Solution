class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
            unordered_map<char,char>gzip;   
            unordered_map<char,char>used;
        
            for(int i=0;i<s.size();i++){
                
                     if((gzip.find(s[i])!=gzip.end() and gzip[s[i]]!=t[i])){
                                    return false;
                     }   
                    
                    if(used.find(t[i])!=gzip.end() and used[t[i]]!=s[i]) return false;
                
                    gzip[s[i]]=t[i];
                    used[t[i]]=s[i];
                
            }
        
            return true;
        
    }
};