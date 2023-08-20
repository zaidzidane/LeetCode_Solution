class Solution {
public:
    
    long long int valint(string s){
            int start=0;
            if(s[start]=='-'){
                    start=1;
            }
            long long int val=0;
            for(int i=start;i<s.size();i++){
                
                    val+=s[i]-'0';
                    val*=10;
            }
            
            if(start==1){
                    val=-1*val;
            }
            return val/10;
    }
    
    
    int evalRPN(vector<string>& tokens) {
            stack<string>s;
            for(int i=0;i<tokens.size();i++){
                if(tokens[i]!="+" and tokens[i]!="-" and tokens[i]!="*" and tokens[i]!="/"){
                        s.push(tokens[i]);
                }
                else{
                        if(tokens[i]=="+"){
                                long long int  a=valint(s.top());
                                s.pop();
                                long long int b=valint(s.top());
                                s.pop();
                                long long int c=a+b;  
                                s.push(to_string(c));  
                        }   
                        else if(tokens[i]=="-"){
                                long long int a=valint(s.top());
                                s.pop();
                                long long int b=valint(s.top());
                                s.pop();
                                long long int c=b-a;
                                s.push(to_string(c));  
                        } 
                        else if(tokens[i]=="*"){
                                long long int a=valint(s.top());
                                s.pop();
                                long long int b=valint(s.top());
                                s.pop();
                                long long int c=a*b;
                                s.push(to_string(c));  
                        }
                        else{
                                long long int a=valint(s.top());
                                s.pop();
                                long long int b=valint(s.top());
                                s.pop();
                                long long int c=b/a;
                                s.push(to_string(c));  
                        } 
                    
                }
            
            }
        
            return valint(s.top());
        
    }
};