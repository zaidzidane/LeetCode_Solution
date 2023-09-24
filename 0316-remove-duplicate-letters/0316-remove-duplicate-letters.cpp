class Solution {
public:
    string removeDuplicateLetters(string s) {
        
            stack<int>stk;
            unordered_map<int,int>gzip;
            for(int i=0;i<s.size();i++)
            {    
                    gzip[s[i]]=i;   
            }
            
            // cout<<"here"<<endl;
            string ans="";
            vector<int>visited(26,false);
            for(int i=0;i<s.size();i++){
                    while(!stk.empty() and s[stk.top()]>s[i] and gzip[s[stk.top()]]>i and visited[s[i]-'a']==false){
                                     //cout<<stk.top()<<endl;
                                      visited[s[stk.top()]-'a']=false;
                                      stk.pop();
                    }
                
                    if(visited[s[i]-'a']==false){
                        stk.push(i);
                        visited[s[i]-'a']=true;   
                    }
            }
        
        
            while(!stk.empty()){
                    ans+= s[stk.top()];
                    stk.pop();
            }
            
            reverse(ans.begin(),ans.end());
            return ans;
    }
};