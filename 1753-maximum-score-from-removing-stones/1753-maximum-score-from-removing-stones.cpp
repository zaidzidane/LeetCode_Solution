class Solution {
public:
    int maximumScore(int a, int b, int c) {
        
            vector<int>v;
            v.push_back(a);
            v.push_back(b);
            v.push_back(c);
            sort(v.begin(),v.end());
            int min_1=v[0];
            int min_2=v[1];
            int min_3=v[2];
            
        
            int cnt=0;
            while(min_1+min_2+min_3>1){
            if(min_1+min_2==min_3){
                    
                    cnt+=min_3;
                    return cnt;
            }
            if(min_1+min_2<min_3){
                
                    cnt+=min_1+min_2;
                    return cnt;
            }
        
            if(min_1+min_2>min_3){   
             
                
                    while(min_1+min_2>min_3){
                            cnt++;
                            min_1--;
                            min_2--;

                    }
                
                    
            }
        
            }
        
            return cnt;
    }
};