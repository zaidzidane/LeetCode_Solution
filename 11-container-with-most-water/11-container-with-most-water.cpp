class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0;
        int j=height.size()-1;
        int max_val=0;
        while(i<j){
            
            
                    max_val=max(max_val,min(height[i],height[j])*(j-i));
                    if(height[i]>height[j]){
                        
                            j--;
                    }
                    else{
                        
                            i++;
                    }
            
        }
        
        return max_val;
        
    }
};