class Solution {
public:
    char findTheDifference(string s, string t) {
        
            vector<int>v(26,0);

            for(int i=0;i<s.size();i++){
                    v[s[i]-'a']+=1;
            }
        
        
            for(int j=0;j<t.size();j++){
                    if(v[t[j]-'a']==0){
                            return t[j];
                    }
                
                    v[t[j]-'a']-=1;
            }            
            
        
            return ' ';
        
    }
};