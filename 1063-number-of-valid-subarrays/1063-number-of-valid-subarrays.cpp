class Solution {
public:
    int validSubarrays(vector<int>& nums) {
            
            stack<int>s;
            int n=nums.size();
            vector<int>ans(n,-1);
            for(int i=0;i<nums.size();i++){
                
                    if(s.empty()){
                        s.push(i);
                    }
                
                    while(!s.empty() and nums[s.top()]>nums[i]){
                                ans[s.top()]=i-s.top();  
                                s.pop();
                    }
                    
                    s.push(i);
            }
        
        
            int cnt=0;
            for(int i=0;i<ans.size();i++){
                    
                    if(ans[i]==-1){
                                cnt+=ans.size()-i;
                    }   
                    else{
                            cnt+=ans[i];
                    }
                
            }
        
            return cnt;
        
    }
};