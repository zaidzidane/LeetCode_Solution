class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
                int n=numCourses;
                vector<vector<int>>v(n);
                vector<int>indegree(n,0);
                for(int i=0;i<prerequisites.size();i++){
                    
                        v[prerequisites[i][1]].push_back(prerequisites[i][0]);
                        indegree[prerequisites[i][0]]+=1;
                                
                }
        
                queue<int>q;
            
                for(int i=0;i<v.size();i++){
                    
                        if(indegree[i]==0)
                                 q.push(i);
                    
                }
                
                vector<int>ans;
                while(!q.empty()){
                    
                            auto temp=q.front();
                            q.pop();
                            ans.push_back(temp);
                            cout<<temp<<endl;
                            for(int item:v[temp]){
                                    
                                        indegree[item]-=1;
                                        if(indegree[item]==0){
                                            
                                                    q.push(item);
                                                
                                        }
                            }
                    
                }    
        
               
                if(ans.size()==n){
                        return ans;
                }
                
                return {}; 
            
                
                
    }
};