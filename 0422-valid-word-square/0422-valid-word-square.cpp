class Solution {
public:
    bool validWordSquare(vector<string>& words) {
            int maxim=0;
            for(auto item:words){
                    
                    int val=item.size();
                    maxim=max(maxim,val);
            }
            
            if(maxim!=words.size()) return false;
            for(int i=0;i<words.size();i++){
                for(int j=i+1;j<maxim;j++){
                            if((words[i].size()<=j and words[j].size()>i)){
                                    
                                    return false;
                            }
                            else if((words[i].size()<=j and words[j].size()<=i)){
                                
                                        continue;
                                
                            }
                           
                            if(words[i][j]!=words[j][i]){
                                    cout<<i<<j<<endl;  
                                    return false;
                                
                            }
                        
                }
                
            }
        
            return true;
    }
};