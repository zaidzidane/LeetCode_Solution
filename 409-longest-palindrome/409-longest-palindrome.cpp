class Solution {
public:
    int longestPalindrome(string s) {
        
                
            unordered_map<char,int>gzip;
            for(int i=0;i<s.length();i++){
                
                        if(gzip.count(s[i])==0){
                            
                                gzip[s[i]]=1;
                            
                        }
                        else{
                                gzip[s[i]]+=1;
                        }
                        
            }
            
            int extra=0;
            int cnt=0;
            for(auto item:gzip){
                
                    if(item.second%2==0){
                                cnt+=item.second;
                        
                    }
                    else{
                        
                                    if(item.second>1 and extra==1){
                                                
                                                cnt+=item.second-1;
                                            
                                    }
                                    else if(item.second>1 and extra==0){
                                            
                                                    cnt+=item.second;
                                            
                                    }
                                    else if(extra==0){
                                            
                                                    cnt+=1;
                                                
                                    }
                                    extra=1;
                            
                    }
                
                
            }
        
            if(extra==0){
                
                        return cnt--;
            }
            else{
                    
                        return cnt;
                
            }
        
        
    }
};