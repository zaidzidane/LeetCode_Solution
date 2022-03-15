class Solution {
public:
    string interpret(string command) {
            
                int i=0;
                string ans="";
                while(i<command.size()){

                        if(command[i]=='G'){
                                ans+="G";
                        }
                        if(command[i]=='(' and command[i+1]==')'){
                            
                                ans+='o';
                                i+=1;
                            
                        }
                    
                        if(command[i]='(' and command[i+1]=='a'){
                            
                                ans+="al";
                                i+=2;
                        }
                
                        i+=1;
                
                }
        
            return ans;
        
    }
};