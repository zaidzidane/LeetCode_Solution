class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        
           sort(nums.begin(),nums.end());
           vector<int>prefix;
           prefix.push_back(0);
           
            vector<int>ans;
            for(int i=0;i<queries.size();i++){
                    int sum=0;
                    for(int j=0;j<nums.size();j++){
                           sum+=nums[j];
                           if(sum==queries[i]){
                                    ans.push_back(j+1);
                                    break;
                            }
                            else if(sum>queries[i]){
                                    ans.push_back(j);
                                    break;
                            }
                    }
                
                    if(sum<queries[i]){
        
                            ans.push_back(nums.size());
                    }
                
            }
        
            return ans;
        
    }
};