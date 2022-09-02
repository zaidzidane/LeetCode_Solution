class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        
        int i1=-1;
        int i2=-1;
        int max_distance=INT_MAX;
        
        for(int i=0;i<wordsDict.size();i++){
            
                
                    if(wordsDict[i]==word1){
                        
                                i1=i;
                                cout<<i;
                            
                    }
                    if(wordsDict[i]==word2){
                        
                                i2=i;
                                cout<<i;
                        
                    }
            
                    if(i1!=-1 and i2!=-1){
                        
                                max_distance=min(max_distance,abs(i1-i2));
                        
                        
                    }
            
        }
        
        return max_distance;
        
    }
};