class Solution {
public:
    bool isStrobogrammatic(string num) {
        
        
            unordered_map<char,char>gzip;
            
            gzip['8']='8';
            gzip['9']='6';
            gzip['6']='9';
            gzip['1']='1';
            gzip['0']='0';
            
            int i=0;
            int j=num.size()-1;
            while(i<=j){
                
                    
                     if(gzip.find(num[i])==gzip.end() or gzip.find(num[j])==gzip.end()){
                         
                                return false;
                     }   
                
                    else{
                        
                            if(gzip[num[i]]!=num[j]){
                                
                                    return false;
                                
                            }
                        
                           
                        
                    }
                
                
                    i++;
                    j--;
                
            }
        
            return true;
        
    }
};