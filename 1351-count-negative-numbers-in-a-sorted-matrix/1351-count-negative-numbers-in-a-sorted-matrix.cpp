class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
           int row=grid.size();
           int column=grid[0].size()-1;
           int i=0;
           int j=column;
           int cnt=0;
                while(i<row){
                    while(j>=0 and  grid[i][j]<0)
                                    
                    j--;
                           
                    cnt+=column-j;
                    i++;
                                    
                            
                                
                        
                    }
                
              
          
        
        return cnt;
        
    }
};