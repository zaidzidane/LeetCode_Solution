class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        
       
        for(int q=0;q<matrix.size()/2;q++){
            
                    for(int k=q;k<matrix.size()-1-q;k++){

                                
                                    int temp=matrix[k][matrix[0].size()-1-q];
                                    cout<<temp<<endl;
                                    matrix[k][matrix[0].size()-1-q]=matrix[q][k];
                                    int temp2=matrix[matrix.size()-1-q][matrix[0].size()-1-k];
                                    cout<<temp2<<endl;
                                    matrix[matrix.size()-1-q][matrix[0].size()-1-k]= temp;
                                    int temp3=matrix[matrix.size()-1-k][q];
                                    matrix[matrix.size()-1-k][q]=temp2;
                                    cout<<temp3<<endl;
                                    matrix[q][k]=temp3;

                    }
            
        }
       
        
    }
};