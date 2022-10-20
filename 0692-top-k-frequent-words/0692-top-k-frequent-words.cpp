class compare{
    
        public:
        bool operator()(pair<int,string>&a,pair<int,string>&b){
            
                        if(a.first>b.first){
                                
                                return true;
                        }
                        else if(a.first<b.first){
                                
                                return false;
                        }
            
                        else{
                            
                                return a.second<b.second;
                        }
                    
            
        }
    
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>gzip;
        
        for(int i=0;i<words.size();i++){
            
                    gzip[words[i]]+=1;
            
        }
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,compare>g;
        
        
        for(auto item:gzip){
                    
                    
                    if(g.size()==k){
                                if(g.top().first<item.second or (g.top().first==item.second and g.top().second>item.first)){
                                    
                                    g.pop();
                                    g.push({item.second,item.first});
                                  
                        
                                }
                                else{
                                        continue;
                                }
                        
                    }
            
                    else 
                            g.push({item.second,item.first});
            
        }
        
      
        vector<string>ans;
        while(!g.empty()){
            
                ans.push_back(g.top().second);
                g.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};