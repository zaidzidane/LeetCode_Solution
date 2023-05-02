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
        
        return product;
        
    }
};