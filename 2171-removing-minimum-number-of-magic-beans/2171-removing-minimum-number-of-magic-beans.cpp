class Solution {
public:
    
    
//     void iterate(vector<int>&beans,vector<long long>&dp,int start,int end){
        
//         if(start==end){      
//                 return;   
//         }   
//         else{   
//             long long cnt=0;
//             for(int i=0;i<beans.size();i++){
//                     if(beans[i]>beans[start]){
//                         cnt+=beans[i]-beans[start];
//                     }
//                     else if(beans[i]==beans[start]){
//                         cnt+=0;
//                     }
//                     else{
//                             cnt+=beans[i];
//                     }
//             }
//             dp[start]=cnt;    
//         }
        
//         iterate(beans,dp,start+1,end);
//     }
    
    long long minimumRemoval(vector<int>& beans) {
        
        long long sum;
       sum = accumulate(begin(beans), end(beans), 0L);
        long long n=beans.size();
        sort(beans.begin(),beans.end());
        long long ans= LLONG_MAX;
         for (int i = 0; i < n; ++i)
                ans = min(ans, sum - (n - i) * beans[i]);
       
        
        return ans;
        
        
    }
};