class Solution {
public:
    
    
    
    vector<int>row(vector<int>parent,int idx){
        
                
                vector<int>temp;
                if(idx<0){
                        
                            return parent;
                }
                else{
                    
                           
                            temp.push_back(1);
                            for(int i=0;i<parent.size()-1;i++){
                                    // cout<<parent[i]+parent[i+1]<<endl;
                                    temp.push_back(parent[i]+parent[i+1]);
                                
                            }
                        temp.push_back(1);
                    
                    
                }
                idx--;
                return row(temp,idx);
        
        
        
    }
    
    
    
    vector<int> getRow(int rowIndex) {
        
            if(rowIndex==0){
                    return {1};
            }
            if(rowIndex==1){
                    return {1,1};
            }
            
            return row({1,1},rowIndex-2);
            
        
    }
};