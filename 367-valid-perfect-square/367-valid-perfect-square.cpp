class Solution {
public:
    bool isPerfectSquare(int num) {
        
                        int first=0;        
                        int last=num;
            
                        while(first<=last){        
                                    long long mid=first+(last-first)/2;        
                                    
                                    long long  ans=mid*mid;
                                    if(ans==num){
                                            return true;
                                    }
                                    else if(ans>num){
                                                
                                                    last=mid-1;
                                            
                                    }
                                    else{
                                                    first=mid+1;
                                                
                                    }
                            
                        }
        
                        return false;
    }
};