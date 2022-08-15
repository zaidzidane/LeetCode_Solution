class Solution {
public:
    int romanToInt(string s) {
        
            unordered_map<char,int>order;
            order['I']=1;
            order['V']=2;
            order['X']=3;
            order['L']=4;
            order['C']=5;
            order['D']=6;
            order['M']=7;
        
            unordered_map<char,int>value;
            value['I']=1;
            value['V']=5;
            value['X']=10;
            value['L']=50;
            value['C']=100;
            value['D']=500;
            value['M']=1000;
        
            
            int cnt=0;
            cnt+=value[s[0]];
            for(int i=1;i<s.length();i++){
                    if(order[s[i]]<=order[s[i-1]]){
                                 cnt+=value[s[i]];
                    }
                    else{
                            
                                cnt+=value[s[i]]-2*value[s[i-1]];
                        
                    }
                    
            }
        
            return cnt;
    }
};