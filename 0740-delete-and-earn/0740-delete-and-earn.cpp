class Solution {
public:
    
    
    
    int deleteAndEarn(vector<int>& nums) {
    
            int n=10001;
            vector<int>v(n,0);
           
            for(auto item:nums){
                    v[item]+=item;
            }
            
            int take=0;
            int skip=0;
            for(int i=0;i<n;i++){
                int takei=skip+v[i];
                int skipi=max(skip,take);
                take=takei;
                skip=skipi;
                
            }
        
            return max(take,skip);
    }
};