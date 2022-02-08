class Solution {
public:
    int addDigits(int num) {
        
            int sum=0;
            while(num!=0 or sum/10!=0){
                
                        cout<<sum<<"\t"<<num<<endl;
                        sum+=num%10;
                        num/=10;
                        if(num==0 and sum/10!=0){
                                num=sum;
                                sum=0;
                        }
            }
        
            return sum;
    }
};