class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        int cur_max=0;
        int cnt=0;
        vector<int>pos(n);
        
        for(int i=0;i<pos.size();i++){
            
                    cout<<pos[i]<<endl;
        }
        
        while(true){
                for(int i=0;i<n;i++){
                    while(pos[i]<m and mat[i][pos[i]] < cur_max){
                         ++pos[i];
                    }
                    
                    if(pos[i]>=m){
                        
                            return -1;
                    }
                    
                    if(cur_max!=mat[i][pos[i]]){
                            
                            cnt=1;
                            cur_max=mat[i][pos[i]];
                    }else if(++cnt==n){
                            
                            return cur_max;
                        
                    }
                }  
        }
        
        return -1;
    }
};