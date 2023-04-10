class Solution {
public:
    bool isValid(string s) {
        
            stack<char>s1;
            for(auto item:s){
                
                    if((item==')' or item==']' or item=='}') and s1.empty()){
                               return false;
                    }
                
                    if(item=='(' or item=='[' or item=='{'){
                               s1.push(item);
                    }
                    
                    else if(item==')' and s1.top()=='('){
                                s1.pop();
                    }
                
                    else if(item==']' and s1.top()=='['){
                                s1.pop();
                    }
                
                    else if(item=='}' and s1.top()=='{'){
                                s1.pop();
                    }
                
                    else
                            return false;
                
            }
        
            return s1.empty();
        
    }
};