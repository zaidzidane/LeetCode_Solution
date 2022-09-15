class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        if(changed.size()%2){
                return {};
        }
        
        unordered_map<int,int>gzip;
        vector<int>ans;
        sort(changed.begin(),changed.end());
        for(int i=0;i<changed.size();i++){
            
                    gzip[changed[i]]+=1;
            
        }
    
        for(int i=0;i<changed.size();i++){
            
                if(gzip[changed[i]]==0){
                        continue;
                }
            
                if(gzip[changed[i]] and gzip[changed[i]*2]){
                           
                            ans.push_back(changed[i]);
                            gzip[changed[i]]-=1;
                            gzip[changed[i]*2]-=1;
                    
                }
                else{
                    
                        return {};    
                    
                }
            
        }
        
        
        return ans;
    }
};