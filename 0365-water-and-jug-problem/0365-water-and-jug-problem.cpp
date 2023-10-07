class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        
            int x=jug1Capacity;
            int y=jug2Capacity;
            vector<int>directions{-x,x,-y,y};
            int total=x+y;
            vector<bool>visited(total+1,false);
            queue<int>q;
            q.push(0);
            while(!q.empty()){
                    int temp=q.front();
                    q.pop();
                    if(temp==targetCapacity){
                            return true;
                    }
                    for(int i=0;i<directions.size();i++){
                            int val=temp+directions[i];
                            if(val>=0 and val<=total and visited[val]==false){    
                                        visited[val]=true;
                                        q.push(val);
                            }           
                    }
            }
        
            return false;
    }
};