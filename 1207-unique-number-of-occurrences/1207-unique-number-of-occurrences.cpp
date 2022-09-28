class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     
           unordered_map<int,int>gzip;
        
            for(int item:arr){
                
                    gzip[item]+=1;
                
            }
        
            set<int>s1;
            set<int>s2;
        
            for(auto item:gzip){
                
                    s1.insert(item.first);
                    s2.insert(item.second);
                
            }
        
            return s1.size()==s2.size();
    }
};