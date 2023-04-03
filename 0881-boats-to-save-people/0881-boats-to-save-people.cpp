class Solution {
public:
    
    int numRescueBoats(vector<int>& people, int limit){
        
            int i=0;
            int j=people.size()-1;
            int cnt=0;
            sort(people.begin(),people.end());
            while(i<j){
                    if(people[i]+people[j]>limit){    
                                    cnt+=1;
                                    j-=1;
                    }
                    else{
                                    cnt+=1;
                                    i+=1;
                                    j-=1;
                    }
                    
            }
        
            if(i==j) cnt+=1;
            
            return cnt;
    }
};