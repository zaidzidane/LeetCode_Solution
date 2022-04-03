class Solution {
public:
    int strStr(string haystack, string needle) {
        
            int i=0;
            int j=0;
            while(i<haystack.size() and j<needle.size()){
                    
                    if(haystack[i]==needle[j]){
                            
                                j++;
                        
                    }
                    else{
                                i-=j;
                                j=0;
                        
                    }
                    i++;               
            }
        
            if(j!=needle.size()){
                    
                    return -1;    
                
            }
            
                
            return (i-j);
                    
            
        
            
        
    }
};