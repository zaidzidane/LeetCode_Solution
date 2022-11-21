class Solution {
public:
    

    
    
    
    
    
    
    
    vector<vector<int>>directions{{1,0},{-1,0},{0,1},{0,-1}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
      
        if(maze[entrance[0]][entrance[1]]=='+') return -1;
        
        
        queue<pair<vector<int>,int>>q;
        
        q.push({entrance,0});
        maze[entrance[0]][entrance[1]]='+';
        while(!q.empty()){
            
                auto temp=q.front();
              
                q.pop();
            
                for(int i=0;i<directions.size();i++){
                
                        int x=temp.first[0]+directions[i][0];
                        int y=temp.first[1]+directions[i][1];
                        
                        if(x>=0 and x<maze.size() and y>=0 and y<maze[0].size()  and maze[x][y]=='.'){
                            
                                    maze[x][y]='+';
                                    // cout<<x<<"\t"<<y<<endl;
                                    q.push({{x,y},temp.second+1});
                                
                                    if(x==0 or x==maze.size()-1 or y==0 or y==maze[0].size()-1)
                                                return temp.second+1;
                                    
                        }
                    
                }
            
        }
        
        
        return -1;
       
        
    }
};