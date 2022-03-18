
    
    bool compare(int a,int b){
        
        
            int val1=a;
            int val2=b;
            int cnt1=0;
            int cnt2=0;
        
            while(a!=0){
                    
                    a=a&a-1;
                    cnt1+=1;
            }
        
            while(b!=0){
                    
                    b=b&b-1;
                    cnt2+=1;
            }
            
            if(cnt1==cnt2){
                
                    return val1<val2;
            }
        
            return cnt1<cnt2;
        
        
    }
    

class Solution {
public:
    

    
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};