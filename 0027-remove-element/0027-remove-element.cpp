class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
            int i=0;
            int k=nums.size()-1;
            while(i<=k){
                    while(nums[k]==val){
                            k--;
                            if(k<0){
                                    return 0;
                            }
                    }
                    if(nums[i]==val and i<=k){
                            nums[i]=nums[k];
                            k--;
                    }
                    i++;
            }
            cout<<k<<endl;
            return k+1;
            
    }
};