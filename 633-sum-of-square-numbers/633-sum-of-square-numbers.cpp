
class Solution {
public:
    bool judgeSquareSum(int c) {
        
        
        for(long long int a=0;a*a<=c;a++){
            
                    double b=sqrt(c-a*a);
                    cout<<b;
                    if(b==(int)b){
                            return true;
                    }
                    
        }
        
        return false;
    }
};