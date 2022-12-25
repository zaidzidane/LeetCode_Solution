class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
            string a=s.substr(0,10);
            unordered_map<string,bool>gzip;
            set<string>st;
            for(int i=9;i<s.size();i++){
                    
                    if(gzip.find(a)==gzip.end()){
                                gzip[a]=true;
                    }
                    else
                        st.insert(a);
                
                    a=a.substr(1)+s[i+1];
            }
            
            return vector<string>(st.begin(),st.end());
            
            
            
        
    }
};