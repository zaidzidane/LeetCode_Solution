class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        
            for(int i=0;i<mat[0].size();i++){
                            
                        int val=mat[0][i];
                    
                        int j=1;
                        while(j<mat.size())
                        {
                            int flag=0;
                            int start=0;
                            int end=mat[0].size()-1;
                            while(start<=end){

                                    int mid=start+(end-start)/2;
                                    if(mat[j][mid]==mat[0][i]){
                                                flag=1;
                                                break;
                                        
                                    }
                                    else if(mat[j][mid]>mat[0][i]){
                                        
                                            end=mid-1;
                                        
                                    }
                                    else{
                                        
                                            start=mid+1;
                                    }
                            }
                            // cout<<start<<"\t"<<end<<"\t"<<flag<<"\t"<<val<<endl;
                            if(flag==0){
                                    
                                    break;
                            }
                            
                            else{
                                    j+=1;
                                    flag=0;   
                            }
                        
                    }
                
                     if(j==mat.size())
                            return mat[0][i];
                     
                            
                        
            }
        
            return -1;
    }
};