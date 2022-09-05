class Solution {
public:
    
    bool check(vector<string>matrix,int i,int j){
        
        
            for(int k=0;k<i;k++){
                
                    if(matrix[k][j]=='Q'){
                        
                            return false;
                    }
                
            }
        
        
            int x=i;
            int y=j;
        
            while(x>=0 and y>=0){
                
                    if(matrix[x][y]=='Q') return false;
                    x--;
                    y--;
                
            }
            
            x=i;
            y=j;
            while(x>=0 and y<matrix.size()){
                
                    if(matrix[x][y]=='Q') return false;
                    x--;
                    y++;
                
            }
        
            for(int k=0;k<j;k++){
                
                    if(matrix[i][k]=='Q') return false;
            }
        
        
            return true;
        
        
    }
    
    
    vector<vector<string>>ans;
    
    void levelordersearch(vector<string>&matrix,int n,int i){
        
            if(i>=n){
                
                    ans.push_back(matrix);
                    return;
            }
        
            for(int j=0;j<n;j++){
                
                        if(check(matrix,i,j)){
                            
                                matrix[i][j]='Q';
                                levelordersearch(matrix,n,i+1);
                                matrix[i][j]='.';
                        }
                
            }
        
        
        
        
    }
    
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        
            vector<string>matrix(n,string(n,'.'));
            levelordersearch(matrix,n,0);
            return ans;
        
    }
};