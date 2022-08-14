class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
            int temp=k;
            k-=arr[0]-1;
            if(k<=0){
                
                    return temp;
            }
            
            for(int i=1;i<arr.size();i++){
                
                 
                   
                    if(k-(arr[i]-arr[i-1]-1)<=0){
                        
                            return arr[i-1]+k;
                        
                    }
                       k-=(arr[i]-arr[i-1]-1);
                
            }
        
            return arr[arr.size()-1]+k;
            
        
        
            
                
        
    }
};