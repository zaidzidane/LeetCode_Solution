class Solution {
public:
    int countOdds(int low, int high) {
    
            if(high%2 and low%2){   
                
                    return (high-low)/2+1;   
                
            }
            else if(high%2 or low%2){
                    
                    return (high-low)/2+1;
            } 
        
            else{
                
                    return (high-low)/2;
                
            }
        
        
            return -1;
    }
    
};