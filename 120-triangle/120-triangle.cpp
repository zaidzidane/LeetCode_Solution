class Solution {
public:
    
   
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
           vector<vector<int>>df; 
           df.push_back({triangle[0][0]});
            for(int i=1;i<triangle.size();i++){
                vector<int>row(triangle[i].size(),INT_MAX);
                df.push_back(row);
                for(int j=0;j<triangle[i].size();j++){
                    
                        cout<<i<<"\t"<<j<<endl;
                                            
                                    if(j!=0 and j!=triangle[i].size()-1)
                                         df[i][j] = min(df[i-1][j],df[i-1][j-1])+triangle[i][j];
                                    
                                    else {
                                        
                                        if(j==0)
                                            df[i][j]=df[i-1][j]+triangle[i][j];
                                
                                        if(j==triangle[i].size()-1){
                                            
                                        
                                            df[i][j]=df[i-1][j-1]+triangle[i][j];
                                           
                                           
                                        }
                                            
                                    }
                                    
                      
                    
                }
                
                
            }
        
            int minim=INT_MAX;
            int k=0;
            int last_row=triangle.size()-1;
            while(k<df[last_row].size()){
                  cout<<df[last_row][k]<<endl;
                  minim=min(minim,df[last_row][k]);
                  k++;
                
                
            }
            
            return minim;
            
            
        
        
    }
};