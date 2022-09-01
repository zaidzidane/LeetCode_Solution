class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        
        unordered_map<string,vector<int>>gzip;
        for(int i=0;i<wordsDict.size();i++){
            
                    gzip[wordsDict[i]].push_back(i);          
            
        }
        
        int minim=INT_MAX;
        for(int i=0;i<gzip[word1].size();i++){
            
            for(int j=0;j<gzip[word2].size();j++){
                
                    minim=min(minim,abs(gzip[word1][i]-gzip[word2][j]));
                
                
            }
            
        }
        
        return minim;
        
        
    }
};