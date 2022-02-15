class Solution {
public:
    string getHint(string secret, string guess) {
        
        unordered_map<char,unordered_set<int>>gzip;
        
        for(int i=0;i<secret.size();i++){
                    gzip[secret[i]].insert(i);
        }
        
        int bull=0;
        int cow=0;
        for(int i=0;i<guess.size();i++){
                if(gzip.count(guess[i])){
                            if(gzip[guess[i]].count(i)){
                                    bull+=1;
                                    gzip[guess[i]].erase(i);
                                    guess[i]='*';
                            }                    
                }
        }
        
        for(int i=0;i<guess.size();i++){
            if(guess[i]!='*'){
            if(gzip.count(guess[i])){
                            if(gzip[guess[i]].count(i)==0){
                                    if(gzip[guess[i]].size()!=0){
                                            cow+=1;
                                            gzip[guess[i]].erase(gzip[guess[i]].begin());
                                    }
                            }                    
                         }
             }
            
        }
        
        
        
        
        string s=to_string(bull)+'A'+to_string(cow)+'B';
        return s;
        
    }
};