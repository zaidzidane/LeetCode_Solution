class Solution {
public:
    
//     struct VectorHasher {
//     int operator()(const vector<int> &V) const {
//         int hash = V.size();
//         for(auto &i : V) {
//             hash ^= i + 0x9e3779b9 + (hash << 6) + (hash >> 2);
//         }
//         return hash;
//     }
// };
    
    
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        
        map<vector<int>,int>gzip;
        for(vector<int>d:dig)
        {
                    gzip[d]=1;
                        
        }
        int cnt=0;
        for(vector<int>a:artifacts){
                        
                        int start_x=a[0];
                        int end_x=a[1];
                        int start_y=a[2];
                        int end_y=a[3];
                        int flag=1;
                        for(int i=start_x;i<=start_y;i++){
                                for(int j=end_x;j<=end_y;j++){
                                        vector<int>check{i,j};
                                        if(gzip[check]!=1){
                                                flag=0;   
                                                break;   
                                                
                                        }

                                }
                        }
                        if(flag==1){
                                
                                    cnt++;
                        }
    
        }
        
        
        return cnt;
      
    }
};