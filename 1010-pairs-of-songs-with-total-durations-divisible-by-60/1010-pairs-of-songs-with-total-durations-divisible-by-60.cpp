class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        sort(time.begin(),time.end());
        unordered_map<int,int>gzip;
          int cnt=0;
        for(int  i=0;i<time.size();i++){
               for(int k=1;k<=16;k++){
                    if(gzip[60*k-time[i]]){
                             cnt+=gzip[60*k-time[i]];        
                    }
                   
               }
                
                    gzip[time[i]]+=1;
        }
        return cnt;
    }
};