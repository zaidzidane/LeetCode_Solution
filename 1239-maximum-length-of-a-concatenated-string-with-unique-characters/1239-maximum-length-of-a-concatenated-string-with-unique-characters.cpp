class Solution {
public:
    
   int maxim=0;
    void dfs(vector<string>&arr,int idx,string ans){
        
          
            if(idx==arr.size()){
            
                    vector<int>v(26,0);
                    
                    for(int i=0;i<ans.size();i++){
                        
                           
                            if(v[ans[i]-'a']==1){
                            
                                   
                                    return;
                            }    
                        
                            v[ans[i]-'a']=1;
                        
                    }
                    int size=ans.size();
                   maxim=max(maxim,size);    
                
                 
                    return;
            }
        
           
            dfs(arr,idx+1,ans+arr[idx]);
            dfs(arr,idx+1,ans);
            
            
        
    }
    
    
    
    
    
    int maxLength(vector<string>& arr) {
    
            
            if(arr.size()==1){
                
                unordered_set<char>u;
                   
                u.insert(arr[0].begin(),arr[0].end());
            
                
                return u.size()==arr[0].size()?arr[0].size():0;
            }
        
            dfs(arr,0,"");
            return maxim;
        
    }
};