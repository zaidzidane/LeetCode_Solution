class Solution {
public:
    
    vector<int>check(string s,int i,int j){
        
     
           while(i<=j){
                
                if(s[i]==s[j]){
                    
                    i++;
                    j--;
                }
                else{
                    
                    return {i,j};
                    
                }
           }
        
           return {-1,-1};
        
    }
    
    bool validPalindrome(string s) {
        
        vector<int> ans=check(s,0,s.length()-1);
        if(ans[0]!=-1 and ans[1]!=-1){
            
                    vector<int>temp=check(s,ans[0]+1,ans[1]);            
                    if(temp[0]!=-1 and temp[1]!=-1){
                        
                            ans=check(s,ans[0],ans[1]-1);
                            if(ans[0]!=-1 and ans[1]!=-1)
                                        return false;
                            else
                                        return true;
                                
                    }
                    else{
                                
                                return true;
                            
                    }
                
        }
        else{
            
            return true;
            
        }
        
        return false;
        
    }
};