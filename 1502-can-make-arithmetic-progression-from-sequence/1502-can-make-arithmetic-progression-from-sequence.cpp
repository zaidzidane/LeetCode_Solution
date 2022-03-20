class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
            sort(arr.begin(),arr.end());
            int val=arr[1]-arr[0];
            for(int i=2;i<arr.size();i++){
                    if(arr[i]-arr[i-1]!=val){
                            
                                return false;
                            
                    }
                
                    
            }
        
            return true;
        
        
    }
};