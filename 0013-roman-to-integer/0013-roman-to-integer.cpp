class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int>gzip,order;
        
        gzip['I']=1;
        gzip['V']=5;
        gzip['X']=10;
        gzip['L']=50;
        gzip['C']=100;
        gzip['D']=500;
        gzip['M']=1000;
        
        order['I']=1;
        order['V']=2;
        order['X']=3;
        order['L']=4;
        order['C']=5;
        order['D']=6;
        order['M']=7;
        
        int i=0;
        int ans=0;
        while(i<s.length()){
                
//                 if(i+1>=s.length()){
                
//                         ans+=gzip[s[i]];
//                         i+=1;
                    
//                 }    
            
                if(order[s[i]]>=order[s[i+1]]){
                        
                        ans+=gzip[s[i]];
                        i+=1;  
                }
                else{
                        ans+=(gzip[s[i+1]]-gzip[s[i]]);
                        i+=2;
                    
                }
            
              
            
        }
        
        return ans;
        
    }
};