class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char,int>m;
    
        for(int i=0;i<s.length();i++){
                m[s[i]] = i;         
        }
        
        vector<int>v;
        int previous=0;
        int group_max=INT_MIN;
        for(int i=0;i<s.length();i++){
            
                group_max=max(group_max,m[s[i]]);
                
                if(i==group_max){
                            
                            v.push_back((i+1)-previous);
                            previous=i+1;
                            group_max=-1;
                        
                }
            
        }   
        
       return v; 
    }
};