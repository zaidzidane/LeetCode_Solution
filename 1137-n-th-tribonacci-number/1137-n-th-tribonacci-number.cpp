class Solution {
public:
    int tribonacci(int n) {
        
            int a=0;
            int b=1;
            if(n<=1){
                    return n;
            }
            if(n==2){
                    return 1;
            }
            int c=1;
            int ans=0;
            for(int i=3;i<=n;i++){
                       ans=a+b+c;
                        a=b;
                        b=c;
                        c=ans;
                          
            }
            return ans;
        
        
    }
};