class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        vector<int>diff;
        
        priority_queue<int>pq;
        

        
        for(int i=1;i<heights.size();i++){
                diff.push_back(heights[i]-heights[i-1]);
        }
        
        
        for(int i=0;i<diff.size();i++){
            
            
                    
                  
                    if(bricks<0 and ladders==0){
                        
                                
                                return i-1;
                        
                    }  
                    else if(bricks<0 and ladders>0){
                        
                        
                                bricks+=pq.top();
                                pq.pop();
                                ladders-=1;
                                i-=1;
                        
                    }
                    else{
                        
                             if(diff[i]>0){
                        
                                    bricks-=diff[i];
                                    pq.push(diff[i]);
                            }
                        
                        
                        
                        
                    }
                    
        }
        
        return bricks<0 and ladders<=0?heights.size()-2:heights.size()-1;
        
    }
};