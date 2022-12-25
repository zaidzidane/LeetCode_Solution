class Solution {
public:
    bool rotateString(string s, string goal) {
        
        string word =s;
        for(int i=0;i<s.size();i++){
            
               
          
                if(word==goal){
                    
                            return true;
                        
                }
            
                 word=word.substr(1)+word.substr(0,1);
            
        }
        
        return false;
        
    }
};