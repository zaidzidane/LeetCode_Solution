class Solution {
public:
    int findLonelyPixel(vector<vector<char>>& picture) {
        
            vector<int>row;
            vector<int>column;
            int m=picture.size();
            int n=picture[0].size();
            
            for(int i=0;i<m;i++){
                int cnt=0;
                for(int j=0;j<n;j++){
                    
                        if(picture[i][j]=='B') cnt++;    
   
                }
                row.push_back(cnt);
            }
            
            for(int i=0;i<n;i++){
                int cnt=0;
                for(int j=0;j<m;j++){
                    
                        if(picture[j][i]=='B') cnt++;    
   
                }
                    column.push_back(cnt);
            }
            
        
            int cnt=0;
            for(int i=0;i<picture.size();i++){
                for(int j=0;j<picture[0].size();j++){
                          
                            if(picture[i][j]=='B' and row[i]==1 and column[j]==1){
                                        // cout<<i<<"\t"<<j<<"\t"<<endl;
                                        cnt++;
                                
                            }
                    
                }
            }
        
            return cnt;
        
    }
};