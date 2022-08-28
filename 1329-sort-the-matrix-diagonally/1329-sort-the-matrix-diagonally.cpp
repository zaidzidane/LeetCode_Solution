class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        
                    vector<vector<int>>ans;
                    for(int k=0;k<mat.size();k++){
                                int i=k;
                                int j=0;
                                vector<int>row;
                                
                                while(i<mat.size() and j<mat[0].size()){
                                            cout<<i<<"\t"<<j<<endl;
                                            row.push_back(mat[i][j]);
                                            i++;
                                            j++;
                                            
                                    
                                }
                                sort(row.begin(),row.end());
                                ans.push_back(row);
                                row.clear();
                    }
        
        
        
                       for(int k=0;k<mat.size();k++){
                                int i=k;
                                int j=0;
                                int m=k;
                                int n=0;
                                
                                while(i<mat.size() and j<mat[0].size()){
                                             
                                           mat[i][j]=ans[m][n];
                                            i++;
                                            j++;
                                            n++;
                                            
                                    
                                }
                                
                    }
        
                     ans.clear();
        
                     for(int k=1;k<mat[0].size();k++){
                                int i=0;
                                int j=k;
                                vector<int>row;
                                
                                while(i<mat.size() and j<mat[0].size()){
                                            
                                            cout<<i<<"\t"<<j<<endl;
                                            row.push_back(mat[i][j]);
                                            i++;
                                            j++;
                                            
                                            
                                    
                                }
                                sort(row.begin(),row.end());
                                ans.push_back(row);
                                row.clear();
                    }
        
        
                   
        
        
                       for(int k=1;k<mat[0].size();k++){
                                int i=0;
                                int j=k;
                                int m=k-1;
                                int n=0;
                                
                                while(i<mat.size() and j<mat[0].size()){
                                             
                                           mat[i][j]=ans[m][n];
                                            i++;
                                            j++;
                                            n++;
                                            
                                    
                                }
                                
                    }
 
        
        
    
                      
                    
                    
        
        
                    
        
            return mat;
                
            }
    
    
};