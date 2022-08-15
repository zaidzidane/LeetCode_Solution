class Solution {
public:
    bool isValid(string s) {
        
                stack<char>stk;
                for(int i=0;i<s.length();i++){
                    
                        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                                    stk.push(s[i]);
                        }
                    
                        else{         
                                    if(stk.empty()){
                                            return false;
                                    }
                                    
                                    if(s[i]==')' and  stk.top()=='('){
                                        
                                                stk.pop();                   
                                                    
                                    }
                                     else if(s[i]=='}' and  stk.top()=='{'){
                                        
                                                stk.pop();                   
                                        
                                        
                                    }
                                     else if(s[i]==']' and  stk.top()=='['){
                                        
                                                stk.pop();                   
                                        
                                        
                                    }
                            
                                    else{
                                            
                                                return false;
                                            
                                    }
                            
                            
                            
                        }
                    
                }
            
                if(stk.empty()){
                        return true;
                }
                
                return false;
        
    }
};