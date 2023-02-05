class Solution {
public:
    
    vector<int> findAnagrams(string s, string p) {
        
            vector<int>v1(26,0);
            for(int i=0;i<p.size();i++){
                    v1[p[i]-'a']+=1;
            }
        
            if(p.size()>s.size()){
                    return {};
            }    
        
            vector<int>v2(26,0);
            int j;
            for(j=0;j<p.size()-1;j++){
                    v2[s[j]-'a']+=1;
            }    
        
            vector<int>ans;    
            while(j<s.length()){
                
                  v2[s[j]-'a']+=1;
                  bool flag=true;
                  for(int i=0;i<26;i++){
                            if(v1[i]!=v2[i]){
                                flag=false;
                                break;    
                            }
                  }
                
                  if(flag){
                          ans.push_back(j-p.size()+1);   
                  }
                    
                  v2[s[j-p.size()+1]-'a']-=1;
                  j++;
                  
            }
        
            return ans;
        
    }
};