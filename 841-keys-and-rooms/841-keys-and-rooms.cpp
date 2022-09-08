class Solution {
public:
    
 
    void dfs(vector<vector<int>>rooms,vector<bool>&visited,int index){
        
        
            // cout<<index<<endl;
            if(visited[index]==true) return;
            visited[index]=true;
            if(rooms[index].size()==0){   
                    return;
            }
        
            
           
            for(int i=0;i<rooms[index].size();i++){
                
                    
                    cout<<index;
                    dfs(rooms,visited,rooms[index][i]);

            }
            
            
        
    }
    
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
            vector<bool>visited(rooms.size(),false);
        
            dfs(rooms,visited,0);
        
            for(int i=0;i<rooms.size();i++){
                  
                
                    if(visited[i]==false) return false;
                
            }
            
            return true;
    }
};