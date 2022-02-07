class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int val1=0;
        for(int i=0;i<s.length();i++){
            val1+=s[i]-'a';
        }
        
        int val2=0;
        for(int i=0;i<t.length();i++){
            val2+=t[i]-'a';
        }
        
        char c='a'+(val2-val1);
        return c;
        
    }
};