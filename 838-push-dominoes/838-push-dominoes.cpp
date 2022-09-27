class Solution {
public:
    string pushDominoes(string dominoes) {
  
            vector<int>left;
            int closestl=INT_MAX;
            for(int i=dominoes.size()-1;i>=0;i--){
                
                        if(dominoes[i]=='L') {
                            closestl=i; 
                            left.push_back(0);
                        }
                            
                        else if(dominoes[i]=='R') {
                            
                            closestl=INT_MAX;
                            left.push_back(INT_MAX);
                        }
                        else{ 
                            
                            if(closestl==INT_MAX) left.push_back(closestl);
                
                        else 
                                left.push_back(closestl-i);
                            
                        }
                    
            }
        
            vector<int>right;
            int closestr=INT_MAX;
            for(int i=0;i<dominoes.size();i++){
                
                        if(dominoes[i]=='R') {
                            closestr=i;  
                            right.push_back(0);
                        }
                        else if(dominoes[i]=='L') {
                            closestr=INT_MAX;
                            right.push_back(INT_MAX);
                        }
                        else{
                            
                            if(closestr==INT_MAX) right.push_back(closestr);
                
                        else 
                                right.push_back(i-closestr);
                            
                        }
                    
            }
        
           
            string ans="";
            int n=dominoes.size()-1;
            for(int i=0;i<dominoes.size();i++){
                
                        // cout<<left[n-i]<<"\t"<<right[i]<<endl;
                        if(dominoes[i]=='R' or dominoes[i]=='L')
                                    ans+=dominoes[i];
                
                        else{
                
                            
                            if(left[n-i]==-1 and right[i]==-1){

                                ans+='.';
                            }

                            if(left[n-i]<right[i]){
                                    ans+='L';
                            }
                            if(left[n-i]>right[i]){

                                    ans+='R';
                            }
                            
                            if(left[n-i]==right[i]){
                                
                                    ans+='.';
                            }
                        
                        }
                
            }
        
            return ans;
        
        
    }
};