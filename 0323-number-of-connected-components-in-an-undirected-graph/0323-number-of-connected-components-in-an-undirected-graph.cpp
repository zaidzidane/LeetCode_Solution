class Solution {
public:
    
    
       int find(int x, vector<int>&parent){
        
            if(x==parent[x]){
                
                    return x;
                
            }
        
            return parent[x]=find(parent[x],parent);
                
    }
    
    void unionset(int x,int y,vector<long long>&rank,vector<int>&parent){
        
            int parent_x = find(x,parent);  
            int parent_y=find(y,parent);
        
            if(rank[parent_x]>=rank[parent_y]){
                
                        parent[parent_y]=parent_x;
                        rank[parent_x]+=1;    
            }
            else{
                        parent[parent_x]=parent_y;
                        rank[parent_y]+=1; 
                        
            }
        
        
        
    }
    
    
    int countComponents(int n, vector<vector<int>>& edges) {
        
           
            vector<long long>rank(n,1);
            vector<int>parent(n,0);
            for(int i=0;i<parent.size();i++){
                     parent[i]=i;                  
            }
            
            for(int i=0;i<edges.size();i++){
                        
                        unionset(edges[i][0],edges[i][1],rank,parent);
            }
        
            for(int i=0;i<parent.size();i++){
                
                        parent[i]=find(i,parent);
            }
        
            set<int>s(parent.begin(),parent.end());
            
            return s.size();
    }
};