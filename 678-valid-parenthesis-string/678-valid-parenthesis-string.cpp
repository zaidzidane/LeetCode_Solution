class Solution {
public:
    bool checkValidString(string s) {
        
        int cmin=0;
        int cmax=0;
        
        for(char c:s){
                if(c=='('){ 
                        cmin++;
                        cmax++;
                }
                if(c=='*'){
                        cmax++;
                        cmin=max(cmin-1,0);
                }
                if(c==')'){
                        cmax--;
                        cmin=max(cmin-1,0); 
                }
                if(cmax<0)
                        return false;
            
        }
        
        return cmin==0;
    }
};