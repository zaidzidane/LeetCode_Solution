class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>s;
        unordered_map<int,int>gzip;
        for(int i=0;i<nums2.size();i++){
                
                    if(s.empty()){
                            s.push(i);
                    }    
                    while(!s.empty() and nums2[s.top()]<nums2[i]){
                        
                            
                            gzip[nums2[s.top()]]=nums2[i];
                            s.pop();
                    }
            
                s.push(i);
        }
            
       
        vector<int>ans;
        for(auto item:nums1){
                if(gzip.find(item)!=gzip.end()){
                    
                            ans.push_back(gzip[item]);
                    
                }
            
                else{
                        ans.push_back(-1);
                }
            
        }
        
        return ans;
        
    }
};