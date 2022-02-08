class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1)
            return 1;
        
        int cnt=0;
        int temp=n;
        for(int i=1;i<temp;i++){
                if(n<i)
                    return cnt;
                cnt++;
                n=n-i;
        }
        
        return cnt;
    }
};