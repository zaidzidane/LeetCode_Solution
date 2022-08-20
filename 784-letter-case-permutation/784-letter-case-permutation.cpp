class Solution {
public:
    
    vector<string>s1;
    void permutation(string s,int index){
        
        
                if(index>=s.length()){
                    
                        s1.push_back(s);
                        return;
                }
                
                permutation(s,index+1);
                
                if(islower(s[index])){
                    
                        s[index]=toupper(s[index]);
                        permutation(s,index+1);
                    
                }
        
                else if(isupper(s[index])){
                    
                        s[index]=tolower(s[index]);
                        permutation(s,index+1);
                    
                }
                
            
                
        
        
    }
    
    
    
    
    
    vector<string> letterCasePermutation(string s) {
        
    
            permutation(s,0);
            
            return s1;
            
            
        
    }
};