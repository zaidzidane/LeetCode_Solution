class Solution {
public:
    
    
    vector<int>dfs(int node,int parent,vector<vector<int>>&edges,string& labels,vector<int>&ans){
        
                // cout<<node<<endl;
                vector<int>v(26,0);
                for(auto child:edges[node]){   
                    
                        if(child==parent) continue;
                        vector<int>items=dfs(child,node,edges,labels,ans);
                        for(int i=0;i<items.size();i++){
                                    v[i]+=items[i];
                        }  
                }
        
                v[labels[node]-'a']+=1;
                
                ans[node]= v[labels[node]-'a'];
                return v;
        
    }
    
    
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        
        
            vector<vector<int>>all_edges(n);
        
            for(int i=0;i<edges.size();i++){
                
                        all_edges[edges[i][0]].push_back(edges[i][1]);
                        all_edges[edges[i][1]].push_back(edges[i][0]);
                
            }
        
            vector<int>ans(n,0);
            dfs(0,-1,all_edges,labels,ans);
        
            return ans;
    }
};