class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
            unordered_map<int,vector<char>>gzip;
            gzip['2']={'a','b','c'};
            gzip['3']={'d','e','f'};
            gzip['4']={'g','h','i'};
            gzip['5']={'j','k','l'};
            gzip['6']={'m','n','o'};
            gzip['7']={'p','q','r','s'};
            gzip['8']={'t','u','v'};
            gzip['9']={'w','x','y','z'};
            if(!digits.size()) return {};

        
            vector<string>ans;
            int i=2;
        
            if(digits.size()==1){
                     for(int j=0;j<gzip[digits[0]].size();j++){  
                                    string q="";
                                    q+=gzip[digits[0]][j];
                                    ans.push_back(q);   
                        }
            }
        
            for(int k=0;k<gzip[digits[0]].size();k++){
                        for(int j=0;j<gzip[digits[1]].size();j++){  
                                    string q="";
                                    q+=gzip[digits[0]][k];
                                    q+=gzip[digits[1]][j];
                                  
                                    ans.push_back(q);
                                    
                        }
            }
        
          vector<string>interm=ans;
           
            while(i<digits.size()){
                   
                    ans.clear();
                    for(int k=0;k<interm.size();k++){
                        for(int j=0;j<gzip[digits[i]].size();j++){
                                        string q="";
                                        q+=interm[k];
                                        q+=gzip[digits[i]][j];
                                        ans.push_back(q);
                        }
                    }
                
                    interm=ans;
                    
                    i+=1;
                   
            }
        
    return interm;
        
        
    }
};