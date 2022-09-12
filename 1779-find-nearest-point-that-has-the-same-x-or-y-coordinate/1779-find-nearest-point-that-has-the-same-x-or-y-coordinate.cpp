class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
       
//         cout<<points[1048][0]<<"\t"<<points[1048][1]<<endl;
//         cout<<points[6310][0]<<"\t"<<points[6310][1]<<endl;
        int minim=INT_MAX;
        int ans=-1;
        for(int i=0;i<points.size();i++){
            
                if(points[i][0]==x or points[i][1]==y){
                            int val=abs(x-points[i][0])+abs(y-points[i][1]);
                           if(val<minim){
                               
                                        ans=i;
                                        minim=val;
                                    
                           }
                            if(val==minim){
                                    cout<<"here";
                                    if(abs(points[i][0]-x)<abs(points[ans][0])-x)
                                                ans=i;
                            }
                     
                }
                
        }
        
        
        return ans;
        
    }
};