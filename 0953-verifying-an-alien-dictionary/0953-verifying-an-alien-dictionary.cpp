
    
class Solution {
public:
    
 
    bool isAlienSorted(vector<string>& words, string order) {
        
            unordered_map<char,int>gzip;
            for(int i=0;i<order.size();i++){
                
                    gzip[order[i]]=i;
                
            }  

         
            for(int i=0;i<words.size()-1;i++){               
                        for(int j=0;j<words[i].size();j++){
                                
                                    if(j>=words[i+1].size()){
                                            return false;
                                    }
                            
                                    if(gzip[words[i][j]]>gzip[words[i+1][j]]){
                                            
                                            return false;    
                                    }
                                    else if(gzip[words[i][j]]<gzip[words[i+1][j]])
                                            break;
                        }
                            
                      }
                
                        return true;
                
                
            
        
    }
};