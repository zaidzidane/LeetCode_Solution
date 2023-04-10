class Solution {
public:
    

    
    int largestPathValue(string colors, vector<vector<int>>& edges) {
    
            int n=colors.size();
            vector<int>outdegree(n,0);
            queue<int>q;
            vector<vector<int>>graph(n);
            for(int i=0;i<edges.size();i++){
                
                graph[edges[i][1]].push_back(edges[i][0]);
                outdegree[edges[i][0]]++;            
                
            }
          
            vector<vector<int>>count(n,vector<int>(26,0));
            bool flag=false;
            for(int i=0;i<outdegree.size();i++){
                    if(outdegree[i]==0){
                            q.push(i);  
                            flag=true;
                    }
            }
        
            if(!flag) return -1;
            unordered_map<char,int>gzip;
            int answer=0;
            int seen=0;
            while(!q.empty()){
                int temp=q.front();
                q.pop();    
                seen+=1;
                answer=max(answer,++count[temp][colors[temp] -'a']);
                //cout<<temp<<endl;
               
                for(auto item:graph[temp]){
                        for(int i=0;i<26;i++){
                            
                                count[item][i]=max(count[item][i],count[temp][i]);
                            
                        }
                        outdegree[item]--;
                        if(outdegree[item]==0){
                                q.push(item);
                        }
                    
                }
                
            }
        
        
            return seen<n?-1:answer;   
               
                
    }
};