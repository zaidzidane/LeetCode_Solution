class Solution {
public:
    bool confusingNumber(int n) {
            int temp=n;
            unordered_map<int,int>gzip;
            
            gzip[0]=0;
            gzip[1]=1;
            gzip[6]=9;
            gzip[8]=8;
            gzip[9]=6;
        
            int number=0;
            while(n){
                    int val=n%10; 
                    if(gzip.find(val)==gzip.end()){
                            return false;
                    }
                    number=number*10+gzip[val];
                    n/=10;
                
            }
        
            cout<<number;
            if(number==temp){
                    return false;
            }
            
            return true;
    }
};