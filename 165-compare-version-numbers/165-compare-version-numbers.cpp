class Solution {
public:
    
    int value(string s){
        int ans=0;
        for(int i=0;i<s.length();i++){
            
                ans+=s[i]-'0';
                ans*=10;
        }
        return ans/10;
    }
    
    
    int compareVersion(string version1, string version2) {
        
        
        stringstream ss(version1);
        vector<string>items1;
        vector<string>items2;
        string w1;
        while(getline(ss,w1,'.')){
            items1.push_back(w1);
        }
         stringstream ss2(version2);
        string w2;
        while(getline(ss2,w2,'.')){
            items2.push_back(w2);
        }
        
        int total=min(items1.size(),items2.size());
        for(int i=0;i<total;i++){
                //cout<<value(items1[i])<<"\t"<<value(items2[i])<<endl;
                if(value(items1[i])>value(items2[i])){       
                        return 1;
                }
                else if(value(items1[i])<value(items2[i])){
                        
                        return -1;
                }
        }
        
        if(items1.size()>items2.size()){
            for(int i=total;i<items1.size();i++){
                        if(value(items1[i])>0){
                                return 1;
                        }
            }
            return 0;
        }
        
        if(items1.size()<items2.size()){
            for(int i=total;i<items2.size();i++){
                        if(value(items2[i])>0){
                                return -1;
                        }
            }
            return 0;
        }
        
          
        return 0;
    }
};