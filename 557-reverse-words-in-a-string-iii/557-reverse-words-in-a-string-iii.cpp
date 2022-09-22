class Solution {
public:
    string reverseWords(string s) {
     
        string ans="";
        string word="";
        stringstream ss(s);
        while(ss>>word){
            
            reverse(word.begin(),word.end());
            ans+=word+' ';
            
        }
        
        return ans.substr(0,ans.size()-1);
    }
};