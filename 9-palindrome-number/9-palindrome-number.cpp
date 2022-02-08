class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0){
            return false;
        }
        if(x==0)
            return true;
        
        vector<int>ans; 
        int sign=x<0?-1:1;
        while(x!=0){
            ans.push_back(abs(x%10));
            x/=10;
        }
        
        int n=ans.size();
        ans[n-1]*=sign;
        
        for( int i=0;i<n/2;i++){
                cout<<ans[i]<<"\t"<<ans[n-1-i]<<endl;
                if(ans[i]!=ans[n-1-i]){
                        return false;
                }
        
            
            
        }
        
        return true;
        
    }
};