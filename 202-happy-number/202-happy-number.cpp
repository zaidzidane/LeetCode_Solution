class Solution {
public:
    
    
        int happy(int n){
        
            int sum=0;
            
            while(n!=0){
                
                   
                    sum+=pow(n%10,2);
                    n/=10;
                  
                
            }
        
        
        return sum;
        
    }
    
    
    bool isHappy(int n) {
        
   
        unordered_map<int,int>gzip;
        
        while(n!=1){
            
            
            if(gzip.find(n)==gzip.end()){
                
                    gzip[n]=1;
                    n=happy(n);
                    
                
                
            }
            
            else{
                        
                        return false;
                
            }
            
            
        }
        
        return true;
        
    }
};