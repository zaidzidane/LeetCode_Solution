class Solution {
public:


    int arrayNesting(vector<int>& nums) {
            
            unordered_map<int,int>gzip;  
            int n=nums.size();
            int max_depth=INT_MIN;
            vector<int>parent(n,-1);
            for(int i=0;i<n;i++)
            {           
                        int val=nums[i];
                        int depth=0;
                        while(val>=0 and val<nums.size() and parent[val]==-1)
                        {       parent[val]=i;
                                val=nums[val];
                                depth+=1;
                        }
                        gzip[nums[parent[i]]]=depth;
                        max_depth=max(max_depth,depth);
             
            }
        
            return max_depth;
    }
};