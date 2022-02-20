class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        int max_=*max_element(nums.begin(),nums.end());
        unordered_map<int,int>gzip;
        unordered_map<int,int>start;
        vector<int>ans(max_+1,0);
        for(int i=0;i<nums.size();i++){
                ans[nums[i]]+=1;
                gzip[nums[i]]=i;
                if(start.count(nums[i])==0){
                    
                        start[nums[i]]=i;
                }
        }
        
    
        int max_val=*max_element(ans.begin(),ans.end());
        unordered_set<int>all_index;
        for(int i=0;i<ans.size();i++){
                  if(max_val==ans[i]){
                        all_index.insert(i);
                  }      
        }
        
        
        int current_distance=INT_MAX;
        int min_distance=INT_MAX;
        for(auto a: all_index){
                        current_distance=gzip[a]-start[a];
                        min_distance=min(min_distance,current_distance);
                }
        
        
        return (min_distance+1);
    }
};