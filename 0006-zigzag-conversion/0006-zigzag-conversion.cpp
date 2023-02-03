class Solution {
public:
    
    string convert(string s, int numRows) {
    
          map<int,vector<char>>gzip;
          int i=0;
          int j=0;
          bool flag=false;
          while(i<s.size()){
              
              if(j==numRows-1){
                    
                    flag=true;
              }
              
              if(j==0){
                    flag=false;
              }
              
              gzip[j].push_back(s[i]);
              
              i++;
              if(flag){
                     j--;  
              }
              else{
                     j++;
              }
              
          }  
        
            string ans="";
            for(auto items:gzip){
                
                    //cout<<items.first;
                    for(int i=0;i<items.second.size();i++){
                            ans+=items.second[i];
                            //cout<<items.second[i]<<"\t";
                    }           
                    cout<<endl;
            }
        
        return ans;
    }
};