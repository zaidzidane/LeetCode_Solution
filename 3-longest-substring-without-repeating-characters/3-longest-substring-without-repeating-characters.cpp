class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length()==0){
                return 0;
        }
        int i=0;
        unordered_map<char,int>gzip;
        int max_length=0;
        int length=0;
        int c=-1;
        while(i<s.length()){
                if(gzip.count(s[i])!=0 and gzip[s[i]]>c){
                    
                            cout<<length;
                            max_length=max(max_length,length);
                           
                            length=i-gzip[s[i]];
                            c=gzip[s[i]];
                            gzip[s[i]]=i;
                           
                    
                }
                else{
                    
                            gzip[s[i]]=i;
                            length+=1;
                            
                        
                }
                i+=1;
            
            
            
        }
         max_length=max(max_length,length);
        
        return max_length;
        
    }
};