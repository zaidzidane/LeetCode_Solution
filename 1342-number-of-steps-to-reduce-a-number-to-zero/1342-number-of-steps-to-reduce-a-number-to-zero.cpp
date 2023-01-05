class Solution {
public:
    int numberOfSteps(int num) {
        
            int cnt=0;
            while(num){
                    
                    if(!(num%2)){
                            cnt++;
                            num/=2;
                    }
                    else{
                        
                        num-=1;
                        cnt++;
                        
                    }
                    
            }
        
        
            return cnt;
    }
};