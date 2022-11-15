class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length()==0){
                return 0;    
        }
        
        unordered_map<char,int>gzip;
        int max_len=0;
        int len=0;
        int c=0;
        for(int i=0;i<s.length();i++){
            
                    if(gzip.find(s[i])!=gzip.end()){
                        
                                c=max(gzip[s[i]],c);
                                
                        
                    }  
            
                    max_len=max(max_len,i-c+1);        
                                
                    gzip[s[i]]=i+1;
            
        }
        
        return max_len;
        
    }
};