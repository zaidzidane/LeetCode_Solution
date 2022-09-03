class NumMatrix {
public:
    
    vector<vector<int>>prefix;
    
    NumMatrix(vector<vector<int>>& matrix) {
        
            vector<vector<int>>temp(matrix.size(),vector<int>(matrix[0].size(),0));     
            prefix=temp;
        
        
            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[0].size();j++){
                    
                                if(i-1>=0 and j-1>=0)
                                    prefix[i][j]=matrix[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
                    
                                else if(i-1<=0 and j-1>=0)
                                    prefix[i][j]=matrix[i][j]+prefix[i][j-1];
                                
                                else if(i-1>=0 and j-1<=0)
                                    prefix[i][j]=matrix[i][j]+prefix[i-1][j];
                                
                                else
                                    prefix[i][j]=matrix[i][j];
                                
                        
                }
                
                
            }
        
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
//                 for(int i=0;i<prefix.size();i++){
//                     for(int j=0;j<prefix[0].size();j++){
                        
//                                 cout<<prefix[i][j]<<"\t";
//                     }
                    
//                                 cout<<endl;
//                 }
        
        
                if(row1-1>=0 and col1-1>=0)
                        
                        return prefix[row2][col2]-prefix[row1-1][col2]-prefix[row2][col1-1]+prefix[row1-1][col1-1]; 
        
                else if(row1-1<=0 and col1-1>=0)
                            return prefix[row2][col2]-prefix[row2][col1-1];
            
                else if(row1-1>=0 and col1-1<=0)
                            return prefix[row2][col2]-prefix[row1-1][col2];
        
                else
                            return prefix[row2][col2];
        
                return -1;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */