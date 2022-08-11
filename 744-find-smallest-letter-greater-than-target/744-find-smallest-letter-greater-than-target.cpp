class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        
            char close_char=' ';
        
            int val=(letters.back()-'a') - (target-'a');
            if(val<=0){
                    
                    return letters[0];
            }
        
            int closeness=INT_MAX;
        
            for(int i=0;i<letters.size();i++){
                
                        if(letters[i]==target){
                                    
                                    continue;            
                        }
                        else{
                                val=(letters[i]-'a') - (target-'a');
                                
                                if( val < closeness and val>0 ){
                                        
                                        
                                            closeness=val;
                                            close_char=letters[i];
                                        
                                }
                            
                        }
                    
                    
                
            }
        
            return close_char;
        
    }
};