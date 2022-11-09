class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
            stack<int>s;
            unordered_map<int,int>gzip;
        
            for(int i=0;i<nums2.size();i++){
                
                            if(s.empty()){
                                
                                    s.push(nums2[i]);
                            }
                            
                            if(s.top()<nums2[i]){
                                    
                                        while(!s.empty() and s.top()<nums2[i] ){
                                            
                                                gzip[s.top()]=nums2[i];
                                                s.pop();
                                        
                                        }       
                            }
                            
                                
                                        s.push(nums2[i]);
                                    
                            
            }
            
            while(!s.empty()){
                
                    gzip[s.top()]=-1;
                    s.pop();
    
            }
            
            vector<int>ans;
            for(int i=0;i<nums1.size();i++){
                
                            ans.push_back(gzip[nums1[i]]);
                
            }
    
        
            return ans;
        
    }
};