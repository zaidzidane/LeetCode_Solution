class Solution {
public:
    bool isPathCrossing(string path) {
        
                
                map<vector<int>,int>s1;    
                int point_x=0;
                int point_y=0;
                s1[{0,0}]=1;
                for(int i=0;i<path.size();i++){
                    
                            if(path[i]=='N'){
                                
                                    point_y+=1;
                                
                            }
                            if(path[i]=='S'){
                                
                                    point_y-=1;
                                
                            }
                            if(path[i]=='E'){
                                    
                                    point_x+=1;
                            }
                            if(path[i]=='W'){
                                
                                    point_x-=1;
                                
                            }
                            
                          if(s1.find({point_x,point_y})==s1.end()){
                                    s1[{point_x,point_y}]=1;
                                    
                            
                          }
                            else
                                    return true;
                    
                }
                
                return false;
        
    }
};