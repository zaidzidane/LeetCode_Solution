class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        
        
        priority_queue<char>pq;
        for(int i=0;i<s.length();i++){
                    pq.push(s[i]);
        }
        int k=repeatLimit;
        int cnt=1;
        string ans="";
        ans+=pq.top();
        pq.pop();
        queue<char>extra;
        while(!pq.empty()){
              
                if(cnt!=repeatLimit and ans.back()==pq.top() and extra.empty()){
                            ans+=pq.top();
                            pq.pop();
                            cnt++;
                }
                else  if(cnt==repeatLimit and ans.back()==pq.top() and extra.empty()){
                            extra.push(pq.top());
                            pq.pop();
                    
                }
            
                else if(extra.front()!=ans.back() and !extra.empty()){
                            ans+=extra.front();
                            extra.pop();
                            cnt=1;
                       
                }
            
                else if(cnt!=repeatLimit and ans.back()==extra.front() and !extra.empty()){
                            ans+=extra.front();
                            extra.pop();
                            cnt++;
                }
                
                else  if(cnt==repeatLimit and ans.back()==pq.top() and !extra.empty() and ans.back()==pq.top()){
                            extra.push(pq.top());
                            pq.pop();
                    
                }
            
            
                else{
                        if(!extra.empty()){
                                 if(ans.back()!=pq.top() and extra.front()!=ans.back()){
                                                ans+=extra.front();
                                                extra.pop();
                                                cnt=1;   
                                 }
                                else{
                                    
                                                ans+=pq.top();
                                                pq.pop();
                                                cnt=1;
                                        
                                }
  
                        }
                        else{

                                                ans+=pq.top();
                                                pq.pop();
                                                cnt=1;
                                        
                        }
                    
                    
                    
                    
                }
              
            }
            cout<<"here come stack";
          
            while(!extra.empty()){
                
                if(ans.back()!=extra.front()){
                    
                            ans+=extra.front();
                            extra.pop();
                            cnt=1;
                }
                
                else if(ans.back()==extra.front() and cnt!=repeatLimit){
                    
                    
                             ans+=extra.front();
                             extra.pop();
                             cnt++;
                    
                    
                }
                else{
                    
                            extra.pop();
                    
                    
                }
                
                
            }
        
        
        
        return ans;
        
    }
};