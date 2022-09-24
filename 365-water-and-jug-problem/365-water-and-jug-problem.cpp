class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
    
        
            int x=jug1Capacity;
            int y=jug2Capacity;
            if(targetCapacity<0 or targetCapacity>(x+y)){
                    return false;
            
            }
            vector<int>states{-x,-y,x,y};
            vector<int>visited(x+y+1,0);
            queue<int>q;
            q.push(0);
            while(!q.empty()){
                
                    auto temp=q.front();
                    q.pop();
                    for(int i=0;i<states.size();i++){
                                int node=temp+states[i];
                                // cout<<node<<endl;
                                if(node>=0 and node<=x+y and visited[node]==0){
                                                
                                        if(node==targetCapacity){
                                            
                                                    return true;
                                        }
                                        visited[node]=1;
                                        q.push(node);
                                        
                                }
                        
                    }
                
                
                
            }
                    
        
            return visited[targetCapacity];
        
        
    }
    
};