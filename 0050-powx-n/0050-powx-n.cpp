class Solution {
public:
    
    // unordered_map<int,double>gzip;
    double recursion(double x,int n){
        
        
               
                if(n==0){
                    
                        return 1;
                }
                
                if(n==1){
                        return x;
                }
            
        
                double val;
                if(n%2==0){
                    
                        val=recursion(x,n/2);
                        return val*val;
                }    
                
                else{
                    
                        val=recursion(x,n/2);
                        return val*val*x;
                    
                    
                }
        
        
        
    }
    
    
    double myPow(double x, int n) {
        
                    if(!n) return 1;
                        
            
                    if(n>0)
                        
                            return recursion(x,n);
                    
                    else{
                        
                            int val=abs(n); 
                            return 1/recursion(x,n);
                        
                        
                    }
        
                    return -1;
    }
};