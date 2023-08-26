bool Compare(vector<int>&pairs1,vector<int>&pairs2){
        
    
        return pairs1[1]<pairs2[1];
}  
    
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
           sort(pairs.begin(),pairs.end(),Compare);
           // for(int i=0;i<pairs.size();i++){
           //          cout<<pairs[i][0]<<"\t"<<pairs[i][1]<<endl;
           //  } 
            int curr=INT_MIN;
            int ans=0;
            for(int i=0;i<pairs.size();i++){
                    if(pairs[i][0]>curr){
                            
                            ans+=1;
                            curr=pairs[i][1];
                            
                    }        
                
            }
        
            return ans;
    }
};