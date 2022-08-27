class Solution {
public:
    
    vector<string>ans;
    
    
    void combination(string s,int i,int j,int n){
        
            // cout<<i<<"\t"<<j<<endl;
            // cout<<s<<endl;
            if(i<j)
                    return;
            
            if(i>=n and j>=n){
                        ans.push_back(s);
                        return;    
            }
        
            if(i>=n and j<n){
                
                         combination(s+')',i,j+1,n);
                          return;
            }
                
            if(j>=n and i<n){
                    
                         combination(s+'(',i+1,j,n);
                        return;
            }
            else{
                
                        combination(s+'(',i+1,j,n);
                        combination(s+')',i,j+1,n);
                        
                
            }        
        
        
    }
    
    
    
    vector<string> generateParenthesis(int n) {
        
            combination("",0,0,n);
            return ans;
        
    }
};