class Solution {
public:
    int minimumSemesters(int n, vector<vector<int>>& relations) {
     
            vector<vector<int>>v(n+1);
            vector<int>outdegree(n+1,0);
                
            for(int i=0;i<relations.size();i++){
                
                        v[relations[i][0]].push_back(relations[i][1]);
                        outdegree[relations[i][1]]+=1;
            
            }
            
            queue<pair<int,int>>q;
           
            for(int i=1;i<=n;i++){
                    
                    if(outdegree[i]==0){
                                cout<<i<<endl;
                                
                                q.push({i,1});    
                        
                    }
            }
        
            int max_=-1;
            int cnt=0;
            while(!q.empty()){
                
                    auto temp=q.front();
                    q.pop();
                    max_=max(temp.second,max_);
                    cnt++;
                    for(auto item:v[temp.first]){
                        
                                outdegree[item]--;
                                if(outdegree[item]==0){
                                    
                                        q.push({item,temp.second+1});
                                    
                                }
                    }
                
            }
                
            if(cnt!=n){
                    return -1;
            }
            return max_;
    }
};