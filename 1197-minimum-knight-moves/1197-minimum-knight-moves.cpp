class Solution {
public:
    
    vector<vector<int>>directions{{2,1},{2,-1},{-2,1},{-2,-1},{1,-2},{-1,-2},{1,2},{-1,2}};
    
    int minKnightMoves(int x, int y) {
            int p=abs(x);
            int t=abs(y);
            unordered_set<string>s;
            queue<vector<int>>q;
            q.push({0,0,0});
            while(!q.empty()){
                    vector<int>temp=q.front();
                    q.pop();
                    if(temp[0]==x and temp[1]==y){
                                return temp[2];
                    }
                    for(int i=0;i<directions.size();i++){
                            int m=directions[i][0]+temp[0];
                            int n=directions[i][1]+temp[1];
                            string check=to_string(m)+to_string(n);
                            if(m<-1*(p+2) or n<-1*(t+2) or m>p+2 or n>t+2 or s.find(check)!=s.end())
                                    continue;
                            s.insert(check);
                            q.push({m,n,temp[2]+1});
                    }
            }
            return -1;
    }
};