class Solution {
public:
    int mySqrt(int x) {
        
            if(x==0){
                    return 0;
            }
        
            int start=1;
            int end=x;
            
            
            while(start<=end){
                
                        long long int  mid=start+(end-start)/2;
                        //cout<<start<<"\t"<<mid<<"\t"<<end<<endl;
                
                        if(mid*mid>x and (mid-1)*(mid-1)<x){
                                
                                return mid-1;
                        }
                        
                        if(mid*mid==x){
                                
                                return mid;
                        }
                
                        else if(mid*mid>x){
                            
                                end=mid-1;
                            
                        }
                        else{
                                
                                start=mid+1;
                            
                            
                        }
                
            }
        
            return start;
        
    }
};