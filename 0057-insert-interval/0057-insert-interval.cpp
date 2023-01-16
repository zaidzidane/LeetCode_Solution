class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        
        if(!intervals.size()){
                return {newInterval};
        }
        
        int i=0;
        vector<vector<int>>ans;
        while(i<intervals.size()){
                
                if(intervals[i][1]<newInterval[0]){
                    
                    
                            ans.push_back(intervals[i]);            
                    
                    
                    
                }
            
                else{
                    
                        
                        break;
                }
            
                i++;
            
        }
        
        
        
        if(intervals.size()==ans.size()){
            
                ans.push_back(newInterval);
                return ans;
            
            
        }
        
        
        if(intervals[i][1]>=newInterval[1] and intervals[i][0]<=newInterval[0]){
                
                 ans.push_back(intervals[i]);  
        }
        else if(intervals[i][0]>newInterval[0] and intervals[i][0]>newInterval[1]){
            
                 ans.push_back(newInterval); 
                 i-=1;
            
        }
        else if(intervals[i][0]>newInterval[0] and intervals[i][1]>=newInterval[1]){
            
                ans.push_back({newInterval[0],intervals[i][1]}); 
        }
        else if(intervals[i][0]<=newInterval[0] and intervals[i][1]<newInterval[1]){
            
                ans.push_back({intervals[i][0],newInterval[1]});   
        }
        else{
            
                ans.push_back(newInterval); 
        }
       
        
        
       i++;
        
       while(i<intervals.size()){
   
           
           if(ans.back()[1]>=intervals[i][1]){
               
                    i+=1;
                    continue;    
           }
           
           else if(ans.back()[1]<intervals[i][1] and ans.back()[1]>=intervals[i][0]){
               
                    int val=ans.back()[0];
                    ans.pop_back();
                    ans.push_back({val,intervals[i][1]});
               
           }
           
           else{
               
                ans.push_back(intervals[i]);
               
           }
           
           
            i+=1; 
       }
        
        
        return ans;
        
    }
};