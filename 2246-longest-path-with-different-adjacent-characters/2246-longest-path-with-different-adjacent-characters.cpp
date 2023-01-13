class Solution {
public:
    
    
        int dfs(vector<vector<int>>&ans,string& s,int node,int& max_len){
        
            
            int first=0;
            int second=0;
            // cout<<node<<endl;
            for(auto item:ans[node]){
                 
                    int val=dfs(ans,s,item,max_len);
                
                    if(s[item]==s[node]){
                            continue;
                    }
                        
                
                    if(val>first){
                            
                        second=first;
                        first=val;
                    }
                    else if(val>second){
                        
                            second=val;
                        
                    }
            }
        
            max_len=max(max_len,first+second+1);    
            
            return first+1;
    }
    
    
    
    int longestPath(vector<int>& parent, string s) {    
            
            int n=parent.size();
            vector<vector<int>>ans(n);
            int max_len=1;
            for(int i=1;i<parent.size();i++){
                
                       
                        ans[parent[i]].push_back(i);    
                           
                                    
                       
            }
            dfs(ans,s,0,max_len);
            return max_len;
        
        
    }
};