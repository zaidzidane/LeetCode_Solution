class Solution {
public:
    int reverse(int x) {
        
                int nums=0;
                int flag=0;
                if(x<0){
                        x=abs(x);
                        flag=1;
                }
        
                if(x==INT_MAX or x==INT_MIN){
                        return 0;
                }
                
                while(x){
                    
                        int val=x%10;
                        x/=10;
                        nums=nums*10+val;  
                        if(x>0 and nums>INT_MAX/10){
                                return 0;
                        }
                        if(x>2 and nums==INT_MAX/10){
                                return 0;
                        }
                    
                }
        
                if(flag)    return (-1*nums);
                        
                return nums;
    }
};