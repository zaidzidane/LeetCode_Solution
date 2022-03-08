class Solution {
public:
    double average(vector<int>& salary) {
        
            int max_=INT_MIN;
            int max_index=-1;
            int min_=INT_MAX;
            int min_index=-1;
            
            sort(salary.begin(),salary.end());
            
            for(int i=0;i<salary.size();i++){
                    if(salary[i]<=min_){
                            min_=salary[i];
                            min_index=i;
                    }
                    if(salary[i]>max_){  
                            max_=salary[i];
                            max_index=i;
                    }
            }
        
            double sum=0;
            for(int i=min_index+1;i<max_index;i++){
                
                      
                        sum+=salary[i];
            }
        
      
            
            return sum/(max_index-min_index-1);
        
    }   
};