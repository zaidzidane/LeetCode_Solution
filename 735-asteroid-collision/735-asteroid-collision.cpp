class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
       stack<int>s1;
        
        for(int i=0;i<asteroids.size();i++){
            
            if(asteroids[i]>0){
                s1.push(asteroids[i]);
            }
            else if(asteroids[i]<0 and s1.empty() or s1.top()<0){
                       // cout<<asteroids[i]
                        s1.push(asteroids[i]);
            }
            else{
                        int flag=0;
                        while(!s1.empty()){
                            
                        int temp=s1.top();
                        if(temp+asteroids[i]==0){
                            s1.pop();
                            flag=0;
                            break;
                        }
                        else if(temp+asteroids[i]<0){
                                if(temp>0){
                                        s1.pop();
                                        flag=1;
                                }
                                else{
                                        
                                        break;
                                } 
                        }
                        else{
                                flag=0;
                                break;
                        }
                                
                            
                            
                        }
                        if(flag){
                                s1.push(asteroids[i]);
                        }
                              
                    }
            
        
        }
        vector<int>ans;
        while(!s1.empty()){
            ans.push_back(s1.top());
            s1.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};