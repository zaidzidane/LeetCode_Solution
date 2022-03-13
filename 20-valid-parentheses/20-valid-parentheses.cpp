class Solution {
public:
    bool isValid(string s) {
        
        if(s.length()==1)
            return false;
        
        stack<char>q;
        for(int i=0;i<s.length();i++){
            
                if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                    q.push(s[i]);
                }
                if(!q.empty()){
                    if(s[i]==')'){

                            if(q.top()!='(') return false;  
                            q.pop();
                    }
                    else if(s[i]==']'){
                            if(q.top()!='[') return false;
                            q.pop();

                    }
                    else if(s[i]=='}'){

                            if(q.top()!='{') return false;
                            q.pop();

                    } 
                }
                else return false;
            
        }
        if(q.empty()) return true;
        return false;   
    }
};