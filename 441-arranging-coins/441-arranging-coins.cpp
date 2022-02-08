class Solution {
public:
    

    
    int arrangeCoins(int n) {
        

        if(n>INT_MAX/8){
            double k=1;
            k*=n;
            k*=8;
        
        
        if(n==1)
            return 1;
        
        n%=INT_MAX;
       
        long long int x1=(-1+sqrtl(1+(k)))/2;
        long long int  x3=(-1-sqrtl(1+(k)))/2;
        
        return x1>0?x1:x3;
    }
    else{
        
         if(n==1)
            return 1;
        
        n%=INT_MAX;
       
        long long int x1=(-1+sqrtl(1+(8*n)))/2;
        long long int  x3=(-1-sqrtl(1+(8*n)))/2;
        
        return x1>0?x1:x3;
        
    }
    }
};