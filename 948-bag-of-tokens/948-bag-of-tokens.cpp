class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(),tokens.end());
        
        int i=0;
        int j=tokens.size()-1;
        
        if(tokens.size()==0 or power<tokens[0]){
                return 0;
        }
        
        int cnt=0;
        int max_cnt=0;
        while(i<=j){
            
                
                if(power-tokens[i]<0){
                    
                        power+=tokens[j];
                        cnt-=1;
                        j--;
                      
                        
                    
                }
                else{
                    
                        power-=tokens[i];
                        cnt+=1;
                        i++;
                    
                    
                }
             
                max_cnt=max(max_cnt,cnt);
            
        }
        
        return max_cnt;
        
        
    }
};