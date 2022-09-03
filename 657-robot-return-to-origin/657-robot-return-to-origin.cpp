class Solution {
public:
    bool judgeCircle(string moves) {
        
            int point_x=0;
            int point_y=0;
            
            for(int i=0;i<moves.size();i++){
                
                    if(moves[i]=='U'){
                        
                            point_y+=1;
                        
                    }
                
                    if(moves[i]=='D'){
                        
                            point_y-=1;
                        
                    }
                
                    if(moves[i]=='L')
                            point_x-=1;
                
                    if(moves[i]=='R')
                            point_x+=1;
                
            }
        
            if(point_x==0 and point_y==0)
                            return true;
        
            return false;
        
    }
};