class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
            unordered_map<int,int>gzip;
            for(int i=0;i<arr.size();i++){
                
                        gzip[arr[i]]=i;
                
            }
            int cnt=0;
            for(int i=0;i<arr.size();i++){
                
                        if(gzip.count(2*arr[i])!=0 and i!=gzip[2*arr[i]]){
                                cout<<arr[i];
                                return true;
                        }
                
                
            }
        
            return false;
        
    }
};