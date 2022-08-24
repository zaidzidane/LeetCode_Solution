class Solution {
public:
    
    class Compare{
        
      
        bool operator()(pair<int,int>item1,pair<int,int>item2){
            
                return item1.second<item2.first;
            
        }
        
    };
    
    
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
            unordered_map<int,int>gzip;
            
            for(int i=0;i<nums.size();i++){
                
                
                   gzip[nums[i]]+=1;
                     
            }
        
        
            priority_queue<pair<int,int>>pq;
            
            for(auto item:gzip){
                 
                pq.push(make_pair(item.second,item.first));
                
                
            }
        
            vector<int>ans;
            while(k){
                
                    ans.push_back(pq.top().second);
                    pq.pop();
                    k--;
                    
                
            }
        
            
            return ans;
        
    }
    
};