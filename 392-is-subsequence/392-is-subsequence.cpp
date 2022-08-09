class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        
            
            
            stack<char>s1;
            stack<char>s2;
            
            for(int i=0;i<t.length();i++){
                    
                        s1.push(t[i]);
            }
        
            for(int i=0;i<s.length();i++){
                    
                        s2.push(s[i]);
            }
        
            
            while(!s2.empty()){
                    
                    if(s1.empty()){
                            
                                return false;
                    }
                    
                    if(s1.top()==s2.top()){
                            
                                s1.pop();
                                s2.pop();
                    }
                    else{
                                    s1.pop();
                            
                    }
                    
                
                
            }
        
        
        
            return true;
            
    }
};