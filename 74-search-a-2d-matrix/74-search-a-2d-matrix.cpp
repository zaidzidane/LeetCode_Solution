class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
                int row=matrix.size();
                int column=matrix[0].size();
        
                int i=0;
                int j=column-1;
                while(i<row){
                    
                            if(matrix[i][j]<target){
                                    
                                    i++;
                                    
                                
                            }
                    
                            else{
                            
                            int start=0;
                            int end=column-1;
                                    
                            while(start<=end){
                                
                                        int mid=start+(end-start)/2;
                                        if(matrix[i][mid]==target){
                                                
                                                    return true;
                                        }
                                        else if(matrix[i][mid]>target){
                                            
                                                    end=mid-1;
                                                
                                        }
                                        else{
                                                
                                                    start=mid+1;
                                        }
                                
                            }
                                
                               return false;
                            
                           
                    
                }
                    
                    
                    
                }
        
        
            return false;    
              
        
    }
};