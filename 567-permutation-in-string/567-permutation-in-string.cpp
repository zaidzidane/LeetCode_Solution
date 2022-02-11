class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        
        
        int n1=s1.length();
        int n2=s2.length();
        
        if(n1>n2){
            return false;
        }
        int g1[26]={0};
        int g2[26]={0};
        for(int i=0;i<n1;i++){
              g1[s1[i]-'a']+=1;
              g2[s2[i]-'a']+=1;
        }
        int count=0;
        for(int i=0;i<26;i++){
                if(g2[i]==g1[i])
                        count++;
        }
        
        for(int i=0;i<s2.length()-s1.length();i++){    
            int r=s2[i+s1.length()]-'a';
            int l=s2[i]-'a';
            if(count==26)
                    return true;
            g2[r]++;
            if(g2[r]==g1[r])
                count++;
            else if(g2[r]==g1[r]+1)
                count--;
            g2[l]--;
            if(g2[l]==g1[l])
                count++;
            else if (g2[l]==g1[l]-1)
                    count--;
        }
        return count==26; 
    }
};