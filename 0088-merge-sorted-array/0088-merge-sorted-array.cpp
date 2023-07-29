class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            
            
        int i=m+n-1;
        int j=n-1;
        int k=m-1;
        while(j>=0 and k>=0){
            
                if(nums1[k]>nums2[j]){
                        
                            nums1[i]=nums1[k];
                            k--;
                }
                else{
                            
                            nums1[i]=nums2[j];
                            j--;
                }
            
                i--;
            
        }
        
        cout<<j<<k<<endl;
        while(j>=0){
            
                    nums1[i]=nums2[j];
                    j--;
                    i--;
            
        }
        
        while(k>=0){
            
                    nums1[i]=nums1[k];
                    k--;
                    i--;
            
        }
        
        
        
        
        
    }
};