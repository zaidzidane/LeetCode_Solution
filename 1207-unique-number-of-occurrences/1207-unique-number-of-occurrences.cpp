class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int>gzip;
        set<int>s1(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
                    gzip[arr[i]]+=1;
        }
        
        
        set<int>s2;
        for(auto itr:gzip){
            
                s2.insert(itr.second);
            
        }
        
        
        return s1.size()==s2.size();
        
    }
};