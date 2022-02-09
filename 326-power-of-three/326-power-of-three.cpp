class Solution {
public:
    bool isPowerOfThree(int n) {
        

            while(n!=1 and n!=0){
                
                    if(n%3!=0)
                    {
                            return false;
                    }                    
                    else{
                            n/=3;
                    }
                    
            }
            return n==1?true:false;
    }
};