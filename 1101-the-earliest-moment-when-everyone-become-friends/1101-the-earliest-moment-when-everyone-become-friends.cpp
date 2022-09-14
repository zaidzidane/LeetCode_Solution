class Solution {
public:
    
    int find(vector<int>&root,int x){
        
                while(x==root[x]){
                    
                        return x;
                }
                    
                return root[x]=find(root,root[x]);
    }   
    
    
    
    void unionfind(vector<int>&root,vector<int>&rank,int i,int j){
        
        
                    int rootx=find(root,i);
                    int rooty=find(root,j);
                    if(rootx!=rooty){
                        
                                if(rank[rootx]>rank[rooty]){
                                    
                                        rank[rootx]+=rank[rooty];
                                        root[rooty]=rootx;
                                        for(int i=0;i<root.size();i++){
                                            
                                                    if(root[i]==rooty) root[i]=rootx;
                                            
                                        }
                                    
                                }
                            
                                else{
                                    
                                        rank[rooty]+=rank[rootx];
                                        root[rootx]=rooty;
                                         for(int i=0;i<root.size();i++){
                                            
                                                    if(root[i]==rootx) root[i]=rooty;
                                            
                                        }
                                    
                                }
                        
                    }
            
                    
                    
        
        
        
    }
    
    
    int earliestAcq(vector<vector<int>>& logs, int n) {
     
                    sort(logs.begin(),logs.end());
                    vector<int>root(n,-1);
                    vector<int>rank(n,1);
        
                    for(int i=0;i<root.size();i++){
                        
                                root[i]=i;
                        
                    }
        
                   for(auto log:logs){
                       
                                unionfind(root,rank,log[1],log[2]);
                                set<int>s(root.begin(),root.end());
                                if(s.size()==1){
                                        return log[0];
                                }
                       
                   }
        
                    return -1;
                
        
    }
};