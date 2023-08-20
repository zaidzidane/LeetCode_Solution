bool compare(vector<int>v1,vector<int>v2){
            return v1[0]<v2[0]?true:(v1[0]==v2[0]?(v1[1]<v2[1]?true:false):false);
}



class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
            int i=0;
            vector<vector<int>>ans;
            //ans.push_back(intervals[0]);
            if(intervals.size()==0){
                    return {newInterval};
            }
            bool flag=true;
        
            while(i<intervals.size()){
                       
                    if(ans.size()!=0 and intervals[i][0]<=ans.back()[1]){
                            if(intervals[i][1]<ans.back()[1]){
                                    i++;
                                    continue;
                            }
                            int temp=ans.back()[0];
                            ans.pop_back();
                            ans.push_back({temp,intervals[i][1]});          
                    }
                    else{
                                ans.push_back(intervals[i]);           
                    }
                    i++;
                        if(ans.back()[1]<newInterval[0] or ans.back()[0]>newInterval[1]){
                                
                                continue;
                        }

                        else if(ans.back()[1]>=newInterval[0] and ans.back()[1]<=newInterval[1]){

                                    flag=false;
                                    cout<<"here";
                                    if(newInterval[0]<=ans.back()[0]){

                                                ans.pop_back();
                                                ans.push_back(newInterval);

                                    }
                                    else{

                                            int temp = ans.back()[0];
                                            cout<<ans.size()<<endl;
                                            ans.pop_back();
                                            
                                            ans.push_back({temp,newInterval[1]});
                                    } 

                        }

                        else if(ans.back()[1]>=newInterval[1] and ans.back()[0]>=newInterval[0]){

                                    flag=false;
                                   cout<<"here";
                                   int temp=ans.back()[1];
                                   ans.pop_back();
                                   ans.push_back({newInterval[0],temp});

                        }  
                        else{
                            
                            flag=false;
                            
                        }
            }
        
            
            if(flag){
                    
                    ans.push_back(newInterval);
            }
        
           sort(ans.begin(),ans.end(),compare);
            return ans; 
    }
};