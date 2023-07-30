class Solution {
public:
    
    int countNegatives(vector<vector<int>>& grid) {
    
            int cnt=0;
            for(auto items:grid){
                int start=0;
                int end=items.size()-1;
                while(start<=end){
                        int mid=start+(end-start)/2;
                        if(items[mid]>=0){
                            
                             start = mid+1;
                        }
                        else{
                            
                             end =  mid-1; 
                        }   
                }
                // cout<<end<<endl;
                cnt+=items.size()-1-end;
                
            }
        
            return cnt;
        
    }
};