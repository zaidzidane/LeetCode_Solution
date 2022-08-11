class Solution {
public:
    string reverseWords(string s) {
        
        
        stringstream s1(s);
        string word;
        int count=0;
        string new_str="";
        while(s1>>word){
                reverse(word.begin(),word.end());
                new_str+= word+" ";
        }
        
        return new_str.substr(0,new_str.size()-1);
        
    }
};