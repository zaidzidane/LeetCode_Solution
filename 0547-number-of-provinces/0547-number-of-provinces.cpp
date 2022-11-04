class Solution {
public:
    
    
    
    int find(vector<int>&root,int x){
        
            while(root[x]==x){
                
                
                    return x;
                
            }
        
            return root[x]=find(root,root[x]);
    }
    
    
    
    void unionSet(vector<int>&root,vector<int>&rank,int x,int y){
        
        
            int rootx=find(root,x);
            int rooty=find(root,y);
            if(rootx!=rooty){
                
                        if(rank[x]>=rank[y]){
                                
                                rank[x]+=rank[y];
                                root[rooty]=rootx;
                            
                        }
                        else{
                            
                                rank[y]+=rank[x];
                                root[rootx]=rooty;
                            
                            
                        }
                
            }
        
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
    
            int n=isConnected.size();
            vector<int>root(n,0);
            vector<int>rank(n,1);
            for(int i=0;i<root.size();i++){
                
                        root[i]=i;
                
            }
            
        
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                        if(isConnected[i][j]==1){
                                    unionSet(root,rank,i,j);
                        }  
                }
            }
        
        
            for(int i=0;i<root.size();i++){
                
                        root[i]=find(root,root[i]); 
                
            }
        
            set<int>s(root.begin(),root.end());
            return s.size();
    }
};