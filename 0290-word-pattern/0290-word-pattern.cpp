class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
                unordered_map<char,string>gzip;
                unordered_map<string,char>gzip2;
                stringstream ss(s);
                int i=0;
                string word;
                int cnt=0;
                while(ss>>word){
                    
                if((gzip.find(pattern[i])!=gzip.end() and gzip[pattern[i]]!=word) or (gzip2.find(word)!=gzip2.end() and  gzip2[word]!=pattern[i])){
                                    return false;
                    }
                    
                    gzip[pattern[i]] = word;
                    gzip2[word]=pattern[i];
                    i++;  
                    cnt++;
                }
            
                if(cnt!=pattern.size())
                        return false;
                
                return true;
        
    }

    
};