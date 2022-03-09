class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        
        int left=0;
        int right=nums.size()-1;
        int missing=nums[right]-nums[left]-(right-left);
        
        if(k>missing){
                    
                return nums[right]+k-missing;
            
        }
        
        while(left<right-1){
                //cout<<left<<"\t"<<right<<endl;
                int mid=left+(right-left)/2;
            
                missing=nums[mid]-nums[left]-mid+left;
                
                if(k>missing){
                        k-=missing;
                        left=mid;
                        
                }
            
                else{
                        
                        right=mid;
                    
                }
        }
        
        cout<<k;
        return nums[left]+k;
        
    }
};