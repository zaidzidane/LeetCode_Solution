class Solution {
public:
    
    
    int find(vector<int>&parent,int i){
        
            while(i==parent[i]){
                
                    return i;
                
            }
        
            return parent[i]=find(parent,parent[i]);
        
    }
    
    
    void join(vector<int>&parent,vector<int>&rank,int i,int j){
        
            int rootx=find(parent,i);
            int rooty=find(parent,j);
        
           if(rootx!=rooty){
               
                    if(rank[rootx]>=rank[rooty]){
                        
                                rank[rootx]+=rank[rooty];
                                parent[rooty]=rootx;
                    }
                    else{
                        
                                rank[rooty]+=rank[rootx];
                                parent[rootx]=rooty;
                    }
               
                    
           }
        
        
              
                
        
    }
    
    
    
    bool equationsPossible(vector<string>& equations) {
     
     
        vector<int>parent(26,0);
        vector<int>rank(26,1);
        
        for(int i=0;i<parent.size();i++){
            
                parent[i]=i;
            
        }
        
        for(auto item:equations){
            
                    if(item.substr(1,2)=="=="){
                            
                            join(parent,rank,item[0]-'a',item[3]-'a');
                        
                    }
       
        }
        
        
        for(auto item:equations){
                    
                    if(item.substr(1,2)=="!="){
                        
                                
                                int root1=find(parent,item[0]-'a');
                            
                                int root2=find(parent,item[3]-'a');
                                cout<<root1<<" "<<root2;
                                if(root1==root2){
                                    
                                        return false;
                                }
                            
                        
                        
                    }
            
            
        }
        
        
        
        
        return true;
        
    }
};