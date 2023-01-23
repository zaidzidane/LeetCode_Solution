class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int>indegree(n+1,0);
        vector<int>outdegree(n+1,0);
        
        
        for(int i=0;i<trust.size();i++){
            
                indegree[trust[i][1]]++;
                outdegree[trust[i][0]]++;
            
        }
        
        for(int i=0;i<=n;i++){
            
                cout<<indegree[i]<<"\t"<<outdegree[i]<<endl;
            
        }
        
        int ans=-1;
        bool flag=false;
        for(int i=0;i<=n;i++){
            
                if(indegree[i]==n-1 and outdegree[i]==0 and !flag){
                    
                        ans=i;
                    
                }
                
                if(flag){
                        return -1;
                }
            
        }
            
            
        return ans;
        
    }
};