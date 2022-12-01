class Solution {
public:
    bool halvesAreAlike(string s) {
        
            int mid=s.size()/2;
            int cnt1=0;
            int cnt2=0;
            for(int i=0;i<mid;i++){
                
                    if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u'  or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                        
                            cnt1+=1;
                    }
                
                    int x=mid+i;
                    if(s[x]=='a' or s[x]=='e' or s[x]=='o' or s[x]=='i' or s[x]=='u'  or s[x]=='A' or s[x]=='E' or s[x]=='I' or s[x]=='O' or s[x]=='U'){
                        
                            cnt2+=1;
                    }
                
            }
            
            if(cnt1==cnt2) return true;
        
            return false;
    }   
    
        
};