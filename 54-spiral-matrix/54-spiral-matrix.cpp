class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
            int left=0;
            int right=matrix[0].size()-1;
            int top=0;
            int bottom=matrix.size()-1;
        
            vector<int>ans;
            while(left<=right and top<=bottom){
       
            for(int j=left;j<=right;j++){
                
                        ans.push_back(matrix[top][j]);
                        cout<<matrix[top][j];
                        
                
            }
            
            top++;
                
            if(left>right){
                
                break;
            }
            
            for(int i=top;i<=bottom;i++){
                
                        
                        ans.push_back(matrix[i][right]);
                        cout<<matrix[i][right];
                
            }
        
            right--;
                
            if(bottom<top){
                
                    break;
                
            }
            
            for(int j=right;j>=left;j--){
                
                
                        ans.push_back(matrix[bottom][j]);
                
                        cout<<matrix[bottom][j];
            }
            
            bottom--;
        
                
            if(left>right){
                
                break;
            }
                   
            for(int k=bottom;k>=top;k--){
                
                            
                        ans.push_back(matrix[k][left]);
                       
                       
                       
                
            }    
                
        
        
            left++;
            
        }
        
        return ans;    
        
    }
};