class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        
                unordered_map<char,char>gzip;
                unordered_map<char,char>gzip2;
                for(int i=0;i<s.length();i++){
                    
                            if(gzip.find(s[i])!=gzip.end() and gzip2.find(t[i])!=gzip2.end() and (gzip[s[i]]==t[i] and gzip2[t[i]]==s[i]) ){
                                                continue;
                            }
                            else if(gzip.find(s[i])==gzip.end() and gzip2.find(t[i])==gzip2.end()){
                                    
                                                gzip[s[i]]=t[i]; 
                                                gzip2[t[i]]=s[i];
                                    
                            }
                    
                            else{
                                    
                                            return false;   
                                    
                            }
                            
                    
                    
                }
        
                return true;
        
        
    }
};