class Solution {
public:
    
    
    int str_int(string num){
        
        int ans=0;
        int sign=1;
        for(int i=0;i<num.length();i++){
            
                if(num[i]=='-'){
                        sign=-1;
                        continue;
                }
                ans+=num[i]-'0';
                ans*=10;
        }
        
        return  sign*(ans/10);
    }
    
    
    
    int evalRPN(vector<string>& tokens) {
            stack<int>s;
            int ans=0;
            for(int i=0;i<tokens.size();i++){
                    if(tokens[i]!="+" and tokens[i]!="-" and tokens[i]!="/" and tokens[i]!="*"){
                            s.push(str_int(tokens[i]));
                            //cout<<str_int(tokens[i])<<endl;
                    }
                    else{
                            int temp1=s.top();
                            s.pop();
                            int temp2=s.top();
                            s.pop();
                                if(tokens[i]=="+")
                                        s.push(temp1+temp2);
                                      
                                    
                                if(tokens[i]=="-")
                                        
                                        s.push(temp2-temp1);
                                
                                if(tokens[i]=="*")
                                        
                                        s.push(temp1*temp2);
                                      
                                
                                if(tokens[i]=="/")
                                       
                                        s.push(temp2/temp1);
                                           
                            }
                            
                    }
                    
                
            
        
            return s.top();
        
    }
};