class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
            vector<int>words(26,0);
        
            for(int i=0;i<magazine.size();i++){
                
                    words[magazine[i]-'a']+=1;
                
            }
        
            for(int i=0;i<ransomNote.size();i++){
                
                
                    words[ransomNote[i]-'a']-=1;
                
                    if(words[ransomNote[i]-'a']<0)
                            
                                return false;
                
            }    
        
            return true;
        
    }
};