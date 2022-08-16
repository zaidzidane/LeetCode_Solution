class Solution {
public:
    

    
    
    int calculate(vector<int>&df,int n){
        
        if(n==2){
            
                        return 2;        
                }
                
                if(n==1){
                    
                        return 1;
                }
            
                if(df[n]!=0){
                    
                        return df[n];
                }
                
        
                df[n]=calculate(df,n-2)+calculate(df,n-1);
                return df[n];
    }
        
        
    
    int climbStairs(int n) {
        
                vector<int>df(n+1,0);
                return calculate(df,n);
    }
    

};                           