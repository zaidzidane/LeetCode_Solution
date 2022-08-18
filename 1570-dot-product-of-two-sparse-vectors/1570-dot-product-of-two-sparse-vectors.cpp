class SparseVector {
public:
    
    vector<int>vec1;
    SparseVector(vector<int> &nums) {
        
            vec1=nums;
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        
            int ans=0;
            for(int i=0;i<vec1.size();i++){
                
                    ans+=vec1[i]*vec.vec1[i];
                
                
            }
        
            return ans;
        
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);