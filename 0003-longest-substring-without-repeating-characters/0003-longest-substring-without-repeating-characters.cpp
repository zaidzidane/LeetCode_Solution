class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
            vector<int>v(128,0);
            int i=0;
            int j=0;
            int max_len=0;
            while(j<s.size()){
                    if(v[s[j]-' ']==1){
                          //cout<<i<<"\t"<<j-1<<endl;
                          max_len=max(max_len,j-i); 
                          v[s[i]-' ']-=1;
                          i++;
                          continue;
                    }        
                    v[s[j]-' ']=1;
                    j++;   
            }
        
        
        max_len=max(max_len,j-i);   
            
        return max_len;
        
        
    }
};