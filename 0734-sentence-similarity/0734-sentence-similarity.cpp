class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        
            unordered_map<string,unordered_set<string>>gzip;
        
            for(auto item:similarPairs){
                
                        gzip[item[0]].insert(item[1]);
                        gzip[item[1]].insert(item[0]);
                
            }
        
            if(sentence1.size()!=sentence2.size()){
                        return false;
            }
        
        
        
            for(int i=0;i<sentence1.size();i++){
                
                        if(sentence1[i]==sentence2[i] or gzip[sentence1[i]].count(sentence2[i])){
                                
                                    continue;        
                            
                        }            
                
                        else return false;
                            
                            
            }
        
            return true;
        
    }
};