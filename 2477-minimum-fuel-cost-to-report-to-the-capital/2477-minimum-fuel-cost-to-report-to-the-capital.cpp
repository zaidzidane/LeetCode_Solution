class Solution {
public:
    
    long long total=0;
    long long dfs(vector<vector<int>>&v,int node,int parent,int seats){
                //cout<<node<<"\t"<<parent<<endl;
                int child=1;
        
                for(int i=0;i<v[node].size();i++){
                            //cout<<v[node][i]<<endl;
                            if(parent!=v[node][i])
                                child+=dfs(v,v[node][i],node,seats);
                }
        
                
                if(node!=0){
                        total+=ceil((double)child/seats);
                }
        
                return child;
        
        
        
        
    }
    
    
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
     
            int n=roads.size()+1;
            vector<vector<int>>v(n);
            
            for(auto item:roads){
                    v[item[0]].push_back(item[1]);
                    v[item[1]].push_back(item[0]);   
            }    
        
           
            
            int node=0;
            dfs(v,node,-1,seats);
            return total;
        
    }
};