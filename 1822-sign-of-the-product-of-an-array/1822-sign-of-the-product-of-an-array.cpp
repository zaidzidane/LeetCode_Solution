class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        long long int product=1;
        for(auto item:nums){
                if(item>0)
                    product*=1;
                else if(item<0)
                    product*=-1;
                else return 0;
            
        }
        
        if(product>0) return 1;
        else if(product<0) return -1;
         return 0;
        
    }
};