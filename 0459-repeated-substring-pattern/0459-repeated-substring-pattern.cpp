class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n=s.length();
        vector<int>pi(n,0);
        
        for(int i=1;i<n;i++){
            
                int j=pi[i-1];
            
                while(j>0 and s[i]!=s[j]){
                        
                        j=pi[j-1];
                }
            
                if(s[i]==s[j]){
                        j++;    
                }
                pi[i]=j;    
        }
        
        
        int l=pi[n-1];
        cout<<l<<endl;
        return l!=0 and l%(n-l)==0;
        
        
    }
};