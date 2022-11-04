class Solution {
public:
    
    
    int find(vector<int>&root,vector<int>&rank,int x){
        
        
        if(root[x]==x){
            
                return x;
            
        }
        
        return root[x]=find(root,rank,root[x]);
        
    }
    
    
    bool unionSet(vector<int>&root,vector<int>&rank,int x,int y){
        
    
            int rootx=find(root,rank,x);
            int rooty=find(root,rank,y);
        
        
            if(rootx!=rooty){
                
                        if(rank[rootx]>=rank[rooty]){
                                     rank[rootx]+=rank[rooty];   
                                     root[rooty]=root[x];
                        }        
                        else{
                                     rank[rooty]+=rank[rootx];
                                     root[rootx]=rooty;  
                        } 
            }
        
            else{
                        return false;
            }
        
            return true;
        
    }
    
    
    bool validTree(int n, vector<vector<int>>& edges) {
   
            vector<int>root(n,0);
            vector<int>rank(n,1);
        
            for(int i=0;i<root.size();i++){
                
                        root[i]=i;
                
            }
        
            for(int i=0;i<edges.size();i++){
                
                
                        if(unionSet(root,rank,edges[i][0],edges[i][1])){
                            
                                continue;
                            
                        }
                        else{
                            
                                return false;
                            
                        }
                
                
            }
        
            for(int i=0;i<root.size();i++){
                    root[i]=find(root,rank,root[i]);
            }
            set<int>s(root.begin(),root.end());
            return s.size()==1;
        
        
    }
};