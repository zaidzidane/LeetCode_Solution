class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     
            int i=0;
            int j=nums.size()-1;
            while(i<j)
            {
                    
                    while(i<j and nums[j]%2)
                    {
                            j--;
                    }
                    // cout<<i<<"\t"<<j<<endl;
                    if(nums[i]%2){
                              swap(nums[i],nums[j]);
                              j--;
                    }
                    i++;   
            }
            return nums;
    }
};