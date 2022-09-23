class Solution {
public:
    
long long int M=1e9+7;
 int cntbit(int i){
     
        return log2(i)+1;
     
     
 }   
    
    
    int concatenatedBinary(int n) {
        long long int ans=0;
        for(int i=1;i<=n;i++){
                
                int len=cntbit(i);
                ans=((ans<<len%M)+i)%M;
            
        }
        
        return ans;
        
    }
};