class Solution {
public:
    
     int find(vector<int>&root,int x){
      
        while(x==root[x]){
            
                return x;
            
        }
      
        return root[x]=find(root,root[x]);
  } 
    
    
  bool unionfind(vector<int>&rank,vector<int>&root,int x,int y){
      
            int rootx=find(root,x);
            int rooty=find(root,y);
            
            if(rootx!=rooty){
                
                    if(rank[rootx]<rank[rooty]){
                        
                                root[rootx]=rooty;
                                rank[rooty]+=rank[rootx];
                                for(int i=0;i<root.size();i++){
                                    
                                        if(root[i]==rootx){
                                            
                                                root[i]=rooty;
                                        }
                                }
                        
                    }
                    else{
                        
                                root[rooty]=rootx;
                                rank[rootx]+=rooty;
                                 for(int i=0;i<root.size();i++){
                                    
                                        if(root[i]==rooty){
                                            
                                                root[i]=rootx;
                                        }
                                }
                        
                    }
                
            }
            else{
                
                    
                    return true;
                
            }
      
        
            return false;
      
  }  
    
  
    
    
    
    
    
    int countComponents(int n, vector<vector<int>>& edges) {
        
        
              vector<int>rank(n,1);
              vector<int>root(n,0);
        
              for(int i=0;i<root.size();i++){
                  
                        root[i]=i;
                  
              }
        
            for(auto item:edges){
                
                      unionfind(rank,root,item[0],item[1]);
                
            }
        
            set<int>s(root.begin(),root.end());
        
        
            return s.size();
         
    }
        
    
    
};