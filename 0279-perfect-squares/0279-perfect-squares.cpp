class Solution {
public:
    
    int perfect(int i){
            int start=0;
            int end=i;
            while(start<=end){
                    int mid=start+(end-start)/2;
                    int val=mid*mid;
                    // cout<<val<<endl;
                    if(val==i){
                            return mid;
                    }
                    else if(val>i){
                            end=mid-1;    
                        
                    }
                    else{
                            start=mid+1;
                    }   
            }
            return 0; 
    }
    
    int helper(vector<int>&answer,vector<int>&dp,int idx,int n){
        
            if(n==0){
                    return 0;
            }
            if(idx>=answer.size() or answer[idx]>n or n<0){
                    return 1000000;
            }
            if(dp[n]!=INT_MAX){
                    return dp[n];
            }
            
            int val1=1+helper(answer,dp,idx,n-answer[idx]);
            int val2=helper(answer,dp,idx+1,n);
            return dp[n]=min(val1,val2);  
        
    }
    
    
    int numSquares(int n) {
            vector<int>elements;
            for(int i=1;i<=n;i++){
                    if(perfect(i)){
                            elements.push_back(i);
                            cout<<i<<endl;
                    }
            }
        
            vector<int>dp(n+1,INT_MAX);
            return helper(elements,dp,0,n);
        
    }
};