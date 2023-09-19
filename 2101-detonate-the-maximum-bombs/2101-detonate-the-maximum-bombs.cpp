class Solution {
public:
    
    
    float distance(vector<int>bombs1,vector<int>bombs2){
            
            return sqrt(pow(bombs1[0]-bombs2[0],2)+pow(bombs1[1]-bombs2[1],2));
        
    }
    
    
    
    int maximumDetonation(vector<vector<int>>& bombs) {
        
            int n=bombs.size();
            vector<vector<int>>v(n);
            for(int i=0;i<bombs.size();i++){
                for(int j=0;j<bombs.size();j++){
                        float val=distance(bombs[i],bombs[j]);
                        if(i!=j and val<=bombs[i][2]){
                                v[i].push_back(j);  
                                //cout<<i<<"\t"<<j<<endl;
                                
                        }
                }
            }
        
            
            int maxim=0;
            for(int i=0;i<bombs.size();i++){
                vector<bool>visited(n,false);
                queue<int>q;
                q.push(i);
                visited[i]=true;
                int cnt=0;
                while(!q.empty()){
                    auto temp=q.front();
                    //cout<<temp<<endl;
                    q.pop();
                    cnt+=1;
                    for(auto node:v[temp]){
                            // cout<<node<<endl;
                            if(visited[node]==true){
                                    continue;
                            }
                            // cout<<node<<endl;
                            q.push(node);
                            visited[node]=true;    
                    }
                    
                }
                    
                maxim=max(maxim,cnt);
            }
            
            return maxim;
        
    }
};