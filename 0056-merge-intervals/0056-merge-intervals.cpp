bool compare(vector<int>v1,vector<int>v2){
            return v1[0]<v2[0]?true:(v1[0]==v2[0]?(v1[1]<v2[1]?true:false):false);
}



class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),compare);
        
        
//         for(int i=0;i<intervals.size();i++){
            
//                 cout<<intervals[i][0]<<"\t"<<intervals[i][1]<<endl;
            
            
//         }
        
        vector<vector<int>>ans;
        
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
                    if(intervals[i][0]<=ans.back()[1]){
                                if(intervals[i][1]<=ans.back()[1]){
                                        continue;
                                }
                                int temp=ans.back()[0];
                                ans.pop_back();
                                ans.push_back({temp,intervals[i][1]});    
                    }
            
                    else{
                                ans.push_back(intervals[i]);
                    }
            
        }
        
        return ans;
        
        
    }
};