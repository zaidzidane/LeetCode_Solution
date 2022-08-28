class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        
        
        int i=0;
        string compare="";
        while(i<abbr.length()){
            
                    if(abbr[i]>48 and abbr[i]<=57){
                            
                                string s="";
                                while(abbr[i]>=48 and abbr[i]<=57){
                                    
                                            s.push_back(abbr[i]);    
                                            i++;
                                    
                                }
                                
                                int cnt=stoi(s);
                                
                                if(cnt>word.length()){
                                    
                                        return false;
                                    
                                }
                                while(cnt){
                                    
                                        compare+='*';
                                        cnt--;
                                    
                                }
                                 
                    }
                    else{
                        
                                if(abbr[i]=='0') return false;
                                
                                    compare+=abbr[i];
                                     i+=1;
                            
                    }
            
                   
                
        }
        
        cout<<compare<<endl;
        if(word.length()!=compare.length()) return false;
        
        for(int i=0;i<word.length();i++){
            
                    if(word[i]==compare[i] or compare[i]=='*'){
                       
                                        continue;
                            
                       
                       }
                    else{
                        
                        
                            return false;
                        
                    }
                    
                    
            
            
        }
        
        return true;
        
    }
};