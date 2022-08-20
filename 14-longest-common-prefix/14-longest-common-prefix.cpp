class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        

        int j=0;        
        if(strs.size()==1){
            
            return strs[0];
            
        }
        
        int maxim=INT_MAX;
        while(j<strs.size()-1){
            
                    int cnt=0;
                    int i=0;
                    while(i<min(strs[j].length(),strs[j+1].length())){
                
                     if(strs[j][i]==strs[j+1][i]){

                              cnt+=1;  
                              i++;
                          
                       }
                        else{
                            
                                break;
                            
                        }
                       
                    }
                
                    maxim=min(maxim,cnt);
                    j++;
                    if(maxim==0){
                            return "";
                    }
            
        }
        
        return strs[0].substr(0,maxim);
            
    }
};