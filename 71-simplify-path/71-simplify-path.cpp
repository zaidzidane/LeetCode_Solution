class Solution {
public:
    string simplifyPath(string path) {
        
            stringstream ss(path);
            string s;
            vector<string>ans;
            while(getline(ss,s,'/')){
                
                    if(s=="")
                            continue;
                    if(s!="." and s!=".."){
                            ans.push_back(s);
                    }
                
                    if(s==".." and ans.size()>=1) {
                            cout<<ans.back()<<endl;
                            ans.pop_back();
                    }
                
                
            }
        
        
            string final="/";
            if(ans.size()==0){
                    
                        return final;
                    
            }
            
            else{
                    for(int i=0;i<ans.size();i++){
                            final+=ans[i];
                            final+='/';
                            
                    }
            }
        
            final.pop_back();
        
            return final;

    }
};