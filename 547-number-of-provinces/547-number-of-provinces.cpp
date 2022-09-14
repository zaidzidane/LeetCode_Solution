    
    int find(vector<int>root,int x){
        
            
            return root[x];
    }
    
    void unions(vector<int>&root,int x,int y){
        
            int rootx = find(root,x);
            int rooty= find(root,y);
            if(rootx!=rooty){
                       for(int i=0;i<root.size();i++){
                           
                            if(root[i]==rooty) root[i]=root[x];
                           
                       }
            }
        
    }


class Solution {
public:
    

    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        vector<int>root(isConnected.size(),0);
        for(int i=0;i<root.size();i++){
            
                    root[i]=i;
        }
        
        
        for(int i=0;i<isConnected.size();i++){
                    for(int j=0;j<isConnected[0].size();j++){
                        
                               if(isConnected[i][j]==1)
                                        unions(root,i,j);
                        
                    }   
        }
        
       
        
       
        set<int>s(root.begin(),root.end());
        return s.size();
        
        
    }
};