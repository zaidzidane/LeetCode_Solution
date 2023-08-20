class Solution {
public:
    bool isValid(string s) {
        
        stack<int>stk;
        for(int i=0;i<s.size();i++){
            
                if(stk.size()==0 and (s[i]==')' or s[i]==']' or s[i]=='}')){
                        return false;
                }
                else if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                        stk.push(s[i]);
                }
                
                else if(s[i]==')' and stk.top()=='('){
                        stk.pop();    
                }
            
                else if(s[i]==']' and stk.top()=='['){
                        stk.pop();    
                }
            
                else if(s[i]=='}' and stk.top()=='{'){
                        stk.pop();    
                }
            
                else{
                            // cout<<s[i]<<endl;
                            return false;
                    
                }    
            
        }
        
        return stk.size()==0;
        
        
        
    }
};