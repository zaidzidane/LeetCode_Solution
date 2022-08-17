class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        
        vector<string>morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        
        set<string>s;
        for(string word:words){
                
                string ans;
                for(int i=0;i<word.length();i++){
        
                            ans+=morse[word[i]-'a'];
                    
                }
                s.insert(ans);
                
        }
        
        
        return s.size();
        
    }
};