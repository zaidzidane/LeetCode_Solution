class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        
        int k=0;
        int j=0;
        int min_=INT_MAX;
        int flag1=0;
        int flag2=0;
        for(int i=0;i<wordsDict.size();i++){
                if(wordsDict[i]==word1){
                        k=i;
                        flag1=1;
                }
                if(wordsDict[i]==word2){
                        j=i;
                        flag2=1;
                }
                if(flag1 and flag2){
                        min_=min(min_,abs(k-j));
                }
        }
        return min_;
    }
};