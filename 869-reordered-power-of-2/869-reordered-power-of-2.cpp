class Solution {
public:
    
    bool permutation(string s,int index){
        
            if(index>=s.length()){
                
                    
                    int val=stoi(s);
                    if((val&val-1)==0)
                        return true;
                
            }
            
            else{
                
                    for(int i=index;i<s.length();i++){
                                
                                if(s[i]=='0' and index==0)
                                        continue;
                                swap(s[i],s[index]);
                                if (permutation(s,index+1))
                                        return true;
                                else
                                    swap(s[index],s[i]);
                    }        
                
            }    
        
            return false;
    }
    
    
    
    bool reorderedPowerOf2(int n) {
        
        
        return permutation(to_string(n),0); 
//         for(string item:ans){
                
//                 int val=stoi(item);
//                 if((val&val-1)==0)
//                         return true;
            
//         }
        
//         return false;
        
    }
};