class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
     
            int sum=0;
            vector<int>ans;
            for(int i=0;i<nums.size();i++){
                
                    if(!(nums[i]%2)) sum+=nums[i];
                
            }
        
            cout<<sum<<endl;
            for(int i=0;i<queries.size();i++){
                
                    
                    if(!(nums[queries[i][1]]%2)  and !(queries[i][0]%2)){
                        
                                    sum+=queries[i][0];
                                    nums[queries[i][1]]+=queries[i][0];
                        
                    }
                
                    else if(nums[queries[i][1]]%2 and queries[i][0]%2){
                        
                                   
                                    nums[queries[i][1]]+=queries[i][0];
                                    sum+=nums[queries[i][1]];
                        
                    } 
                
                    else if(!(nums[queries[i][1]]%2) and queries[i][0]%2){
                        
                                    sum-=nums[queries[i][1]];
                                     nums[queries[i][1]]+=queries[i][0];
                         
                    }
                    
                    else if(nums[queries[i][1]]%2 and !(queries[i][0]%2)){
                        
                                    nums[queries[i][1]]+=queries[i][0];
                        
                        
                    }
                    // cout<<sum<<endl;
                    ans.push_back(sum);
                
            }
        
        
            return ans;
        
    }
};