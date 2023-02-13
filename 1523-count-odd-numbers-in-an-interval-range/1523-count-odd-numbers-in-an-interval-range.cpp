class Solution {
public:
    int countOdds(int low, int high) {
        
            int ans=0;
            if(low%2)
                    if(high%2)
                                return (high-low)/2+1;
                    else
                                return (high-low)/2+1;
        
            else
                
                    if(high%2)
                                return (high-low)/2+1;
                    
                    else
                                return (high-low)/2;
            
    
    }
};