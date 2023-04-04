class Solution {
public:
    int partitionString(string s) {
        
           unordered_map<char,int>gzip;
           int cnt=0;
            int lastbreak=-1;
            for(int i=0;i<s.size();i++){
                    if(gzip.find(s[i])!=gzip.end() and gzip[s[i]]>=lastbreak){
                                cnt+=1;
                                lastbreak=i;
                    }
                    gzip[s[i]]=i;
            }
        
            
          //if(lastbreak<=s.size()-1) return cnt+1;
        
            return cnt+1;
        
    }
};