class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        
        vector<string>ans;
        int size=0;
        queue<string>s;
        string len16="";
        for(int i=0;i<words.size();i++)
        {
                // cout<<i<<endl;
                if((size+words[i].size())>maxWidth)
                {
                        int stksize=s.size();
                        if(stksize>1){
                            int space=(maxWidth-(size-1))/(stksize-1);
                            // cout<<space<<endl;
                            int extraSpace=(maxWidth-(size-1))%(stksize-1);
                            // cout<<extraSpace<<endl;
                            while(s.size()>=2){
                                len16+=s.front();
                                len16+=' ';
                                len16+=string(space,' ');
                                if(extraSpace>0){
                                    len16+=string(1,' ');
                                    extraSpace--;
                                }
                                s.pop();
                            }
                            len16+=s.front();
                            s.pop();
                        
                        }
                        else{
                                int space=(maxWidth-(size-1));
                                len16+=s.front();
                                len16+=string(space,' ');
                                s.pop();

                        }
                        
                        ans.push_back(len16);
                        len16="";
                        size=0;  
                    
                    
                }
            
            
                s.push(words[i]);
                size+=words[i].size()+1;
        }
        
        
        int stksize=s.size();
        if(stksize>1){
          
            int space=(maxWidth-(size-1));
            while(!s.empty()){
                len16+=s.front();
                len16+=' ';
                s.pop();
            }
            len16.pop_back();
            len16+=string(space,' ');
        }
        else{
                int space=(maxWidth-(size-1));
                len16+=s.front();
                len16+=string(space,' ');
                s.pop();
            
        }
        ans.push_back(len16);  
        return ans;
        
    }
};