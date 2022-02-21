class Solution {
public:
    int numKLenSubstrNoRepeats(string s, int k) {
        
       
        int j=k-1;
        vector<int>v(26,0);
        int cnt=0;
        int q=0;
        int i;
        for(i=0;i<k-1;i++){
            v[s[i]-'a']+=1;
                
        }
        i=0;
        while(j<s.length()){
                
                //cout<<s[i]<<'\t'<<s[j]<<endl;
                v[s[j]-'a']+=1;
                int max_=*max_element(v.begin(),v.end());
                
                if(max_==1){
                        cnt++;
                }
                j++;
                v[s[i]-'a']-=1;
                i++;
            
        }
        return cnt;
    }
};