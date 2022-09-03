class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        int dirX=0;
        int dirY=1;
        int x=0;
        int y=0;
        
        
        for(int i=0;i<instructions.size();i++){
            
                    if(instructions[i]=='G'){
                                    x+=dirX;
                                    y+=dirY;
                    }
                    else if(instructions[i]=='L'){
                                int temp=dirX;           
                                dirX=-1*dirY;
                                dirY=temp;                        
                    }
                    else{
                                    int temp1=dirX;
                                    dirX=dirY;
                                    dirY=-1*temp1;
                                    
                    }
        }
        
        cout<<x<<y<<endl;
        cout<<dirX<<dirY<<endl;
        
        return (x==0 and y==0) or (dirX!=0 or dirY!=1);
        
    }
};