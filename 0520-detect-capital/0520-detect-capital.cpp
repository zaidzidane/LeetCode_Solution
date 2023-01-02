class Solution {
public:
    bool detectCapitalUse(string word) {
        
            int big=0;
            int small=0;
            
        
            for(int i=0;i<word.size();i++){
                
                
                    if(word[i]-'A'>=0 and word[i]-'A'<=26){
                            big++;
                    }
                    else{
                            small++;
                    }
                
            }
        
            if(word.size()==big or word.size()==small){
                    return true;
            }
            
            if(big==1 and (word[0]-'A'>=0 and word[0]-'A'<=26)){
                        
                    return true;
                
            }
        
            return false;
    }
};