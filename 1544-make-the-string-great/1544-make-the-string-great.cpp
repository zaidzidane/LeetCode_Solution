class Solution {
public:
    string makeGood(string s) {
        
        stack<char>stk;
        int i=0;
        
        while(i<s.length()){
            
                    if(stk.empty())
                        stk.push(s[i]);
                    
                    else{
                        
                            if(abs(stk.top()-s[i])==32){
                                
                                    stk.pop();    
                                   
                            }   
                            else{
                                    
                                    stk.push(s[i]);
                                    
                            }
                        
                    }
                    i+=1;
            
        }
        
        string ans="";
        while(!stk.empty()){
            
                ans+=stk.top();
                stk.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};