class Solution {
public:
    bool isHappy(int n) {
        
                unordered_map<int,int>gzip;
        
                if(n==1)return true;
            
                
        
                while(gzip.find(n)==gzip.end()){
                        gzip[n]=1;
                        int sum=0;
                        while(n){
                            
                                 int last_idx=n%10;
                                n/=10;
                                sum+=pow(last_idx,2);
                                
                            
                        }
                        
                        n=sum;   
                        cout<<sum<<endl;
                        
                        if(n==1) return true;
                    
                }
        
                return false;
        
    }
};