class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
                unordered_map<int,int>gzip;
                for(int i=0;i<arr.size();i++){
                    
                        gzip[arr[i]]+=1;    
                
                }
                
                priority_queue<int>pq;
                
                for(auto item:gzip){
                    
                            pq.push(item.second);
                    
                }
        
                int cnt=0;
                int sum=0;
                while(sum<arr.size()/2){
                    
                            cnt+=1;
                            sum+=pq.top();
                            pq.pop();
                }
    
                return cnt;
    }
    
};