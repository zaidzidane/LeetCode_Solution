class Solution {
public:
    string removeDuplicates(string s, int k) {
        
               
            stack<pair<char,int>>stk;
            
            int i=0;
            int cnt=0;
            while(i<s.size()){
                
                
                    if(stk.empty()){
                        
                            stk.push({s[i],1});
                            
                        
                    }
                    
                    else if(stk.top().first==s[i] and stk.top().second==k-1){
                        
                                int k=stk.top().second;
                                while(k!=0){
                                    
                                        stk.pop();
                                        k--;
                                }        
                        
                    }
                
                    else{
                                
                                if(stk.top().first==s[i] and stk.top().second<k-1){
                                            stk.push({s[i],stk.top().second+1});
                                            
                                            
                                    
                                }
                                else{
                                    
                                            stk.push({s[i],1});
                                          
                                    
                                }
                        
                                
                    }
                    
                
                    i+=1;
                
            }
        
            string ans="";
            while(!stk.empty()){
                
                    ans+=stk.top().first;
                    stk.pop();
            }
        
            reverse(ans.begin(),ans.end());
            return ans;
    }
};