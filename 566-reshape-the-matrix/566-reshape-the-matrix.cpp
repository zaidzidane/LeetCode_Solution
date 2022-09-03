class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
            if( mat[0].size()*mat.size()!=r*c) return mat;
        
            vector<vector<int>>ans(r,vector<int>(c,0));
            int row=0;
            int col=0;
            for(int i=0;i<mat.size();i++){
                for(int j=0;j<mat[0].size();j++){
                    
                                    
                            if(col>=c){
                                
                                    row++;
                                    col=0;
                            }
                    
                            ans[row][col]=mat[i][j];
                            col++;
                }
                    
                
            }
        
        
            return ans;
        
    }
};