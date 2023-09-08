class Solution {
public:
    
    vector<string>ans;
    
    
    void backtrack(int n,string s,int start,int end){
        
        if(start<end or start>n){
                return;
        }
        if(start==end and start==n){
                ans.push_back(s);
                return;
        }
        
        
           
        backtrack(n,s+'(',start+1,end);
        backtrack(n,s+')',start,end+1);
            
    }
    
    
    
    vector<string> generateParenthesis(int n) {
        
                string s="";
                backtrack(n,s,0,0);
                return ans;
        
    }
};