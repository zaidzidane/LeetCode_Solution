class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int>v(26,INT_MAX);
        int rank=1;
        for(int i=0;i<s.size();i++){
            
                    if(v[s[i]-'a']==INT_MAX){
                        
                            v[s[i]-'a']=rank;
                            rank++;
                    }
                    else{
                        
                            v[s[i]-'a']=-1;
                        
                    }
            
            
        }
        
        int minim=INT_MAX;
        char c;
        for(int i=0;i<26;i++){
                    char q='a'+i;
                    //cout<<q<<"\t"<<v[i]<<endl;
                    if(v[i]==-1)
                            continue;
                    else{
                        
                            if(minim>v[i]){
                                minim=v[i];
                                c='a'+i;
                            }
                        
                        
                    }
                    
        }
        
        // cout<<c<<endl;
        
        for(int i=0;i<s.size();i++){
                
                if(s[i]==c){
                            return i;
                }
        }
            
        return -1;
    }
};