class Solution {
public:
    int arrangeCoins(int n) {
        
                int start=1;
                int end=n;
                
                while(start<=end){
                    
                        long long int mid=start+(end-start)/2;
                        
                        if(mid*(mid+1)/2==n ){
                            
                                    return mid;
                        }
                    
                        else if(mid*(mid+1)/2>n){
                            
                                    end=mid-1;
                        }
                    
                        else{
                                
                                    start=mid+1;
                            
                                    
                        }
                }
                
                
                return end;
    }
};