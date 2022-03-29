class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        
        vector<int>arr2=arr;
        sort(arr2.begin(),arr2.end());
        long long int total1=0;
        long long int total2=0;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            
                total1+=arr[i];
                
                total2+=arr2[i];
                if(total1==total2){
                          
                        cnt++;
                }
            
        }
        
        return cnt;
    }
};